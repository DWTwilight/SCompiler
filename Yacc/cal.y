%{ 
#include <stdio.h> 
#include <stdlib.h> 
#include <stdarg.h> 
#include "Common.h" 
#include "Node.h" 

int yylex(void); 
void yyerror(char *s); 
extern FILE* yyin;
extern FILE* yyout;
extern int yylineno;

auto cManager = CompileManager::GetInstance();
%} 
%union { 
int iValue; /* integer value */ 
float fValue;
int sIndex; /* symbol table index */ 
int type;
Node* nPtr; /* node pointer */
};
%token <fValue> FLOATNUM
%token <iValue> INTEGER 
%token <sIndex> IDENTIFIER 
%token WHILE IF PRINT INT VOID RETURN FLOAT FOR
%nonassoc IFX 
%nonassoc ELSE 
%left GE LE EQ NE '>' '<' 
%left '+' '-' 
%left '*' '/' '%'
%nonassoc UMINUS 
%type <nPtr> stmt expr stmt_list arg arg_list decl var_list var number
%type <type> type
%%
program: 
program section
| section
;

section:
function
| gdecl ';'
| error ';'
| error '}'
;

function: 
type IDENTIFIER {cManager->AddFunction($2, $1)} '(' param_list ')' '{' stmt_list '}' {cManager->CompleteFunction(); $8->Translate(); if($1 == 2){fprintf(yyout, "\t\treturn\n");} delete $8 }
; 

param_list:
param_list ',' param
| param
|
;

param:
type IDENTIFIER {cManager->AddParam($2, $1)}
;

type:
INT {$$ = 0} | FLOAT { $$ = 1 } | VOID {$$ = 2}
;

gdecl:
type gvar_list { cManager->SetGVarType($1) }
;

gvar_list:
gvar
| gvar_list ',' gvar
;

gvar:
IDENTIFIER { cManager->AddGVar($1, NULL) }
| IDENTIFIER '=' number {cManager->AddGVar($1, $3) }
;

decl:
type { cManager->SetCurrentType($1) } var_list { $$ = $3 }
;

var_list:
var { $$ = $1 }
| var_list ',' var { $$ = cManager->GetConnNode(2, $1, $3) }
;

var:
IDENTIFIER {cManager->AddLocalVariable($1); $$ = cManager->GetConnNode(0) }
| IDENTIFIER '=' expr {cManager->AddLocalVariable($1); $$ = new AssignNode(cManager->GetVarNode($1), $3) }
;

stmt: 
';' { $$ = cManager->GetConnNode(0) }
| expr ';' { $$ = $1 }
| PRINT expr ';'  { $$ = new PrintNode($2) }
| IDENTIFIER '=' expr ';' { $$ = new AssignNode(cManager->GetVarNode($1), $3) }
| WHILE '(' expr ')' stmt { $$ = cManager->GetWhile($3, $5) }
| FOR '(' stmt expr ';' stmt ')' stmt { $$ = cManager->GetFor($3, $4, $6, $8) }
| IF '(' expr ')' stmt %prec IFX { $$ = cManager->GetIf($3, $5) }
| IF '(' expr ')' stmt ELSE stmt { $$ = cManager->GetIf($3, $5, $7) }
| '{' stmt_list '}' { $$ = $2 }
| decl ';' { $$ = $1 }
| RETURN ';' { $$ = cManager->GetReturnNode(NULL) }
| RETURN expr ';' { $$ = cManager->GetReturnNode($2) }
| error ';' { $$ = cManager->GetConnNode(0) }
| error '}' { $$ = cManager->GetConnNode(0) }
;

stmt_list: 
stmt_list stmt { $$ = cManager->GetConnNode(2, $1, $2) }
| { $$ = cManager->GetConnNode(0) }
; 

arg_list:
arg_list ',' arg { cManager->GetArgListNode($1, $3) }
| arg { $$ = new ArgListNode($1) }
| { $$ = new ArgListNode(NULL) }
;

arg:
expr { $$ = new ArgNode($1) }
;

number:
INTEGER { $$ = new IntNode($1) }
| FLOATNUM { $$ = new FloatNode($1) }
;

expr: 
number { $$ = $1 }
| IDENTIFIER { $$ = cManager->GetVarNode($1) }
| '-' expr %prec UMINUS  { $$ = new NegNode($2) }
| expr '+' expr  { $$ = new AddNode($1, $3) }
| expr '-' expr { $$ = new SubNode($1, $3) }
| expr '*' expr { $$ = new MulNode($1, $3) }
| expr '/' expr { $$ = new DivNode($1, $3) }
| expr '%' expr { $$ = new ModNode($1, $3) }
| expr '<' expr { $$ = new LTNode($1, $3) }
| expr '>' expr { $$ = new GTNode($1, $3) }
| expr GE expr { $$ = new GENode($1, $3) }
| expr LE expr { $$ = new LENode($1, $3) }
| expr NE expr { $$ = new NENode($1, $3) }
| expr EQ expr { $$ = new EQNode($1, $3) }
| '(' expr ')' { $$ = $2 }
| IDENTIFIER '(' arg_list ')' { $$ = cManager->GetFunc($3, $1) }
; 
%%
void yyerror(char *s) { 
    fprintf(stdout, "line %d: %s\n", yylineno, s);
    cManager->SetFlag(false);
}

int main(int argc, char** args){
    if (argc >= 3) {
		yyin = fopen(args[1], "r");
		if (yyin == NULL) {
			printf("Cannot open file: %s\n", args[1]);
			return -1;
		}

		yyout = fopen(args[2], "w");
		if(yyout == NULL){
			printf("Cannot write out!");
			return -1;
		}
	}
	else {
		printf("Invalid Args!\n");
		return -1;
	}

    yyparse();
    fclose(yyin);
    fclose(yyout);
    
    if(cManager->GetFlag()){
        return 0;
    }
    return 1;
}