%{ 
#include <stdlib.h> 
#include "Common.h" 
#include "cal.tab.h" 
void yyerror(char *); 

extern CompileManager* cManager;
%}
comment ("//"[^\n]*)
integer [0-9]+
float {integer}(\.{integer})
op [-­()<>=+*/%;{}.,]
whiteSpace [ \t\r\n]
identifier [a-zA-Z_][a-zA-Z0-9_]*
%%
\n { yyset_lineno(yylineno+1); }
{comment} ;
"while"    return WHILE; 
"for" return FOR;
"if"    return IF; 
"else"    return ELSE; 
"print"    return PRINT; 
"int" return INT;
"float" return FLOAT;
"void" return VOID;
"return" return RETURN;
{identifier} {yylval.sIndex = cManager->AddIdentifier(yytext); return IDENTIFIER;}
{float} {
    yylval.fValue = atof(yytext);
    return FLOATNUM;
}
{integer} { 
    yylval.iValue = atoi(yytext); 
    return INTEGER;
    } 
">="     return GE; 
"<="    return LE; 
"=="    return EQ; 
"!="    return NE; 

{op} {
return *yytext; 
} 
{whiteSpace}    ;           /* ignore whitespace */ 
.              yyerror("Unknown character"); 
%%
int yywrap(void) { 
return 1; 
} 