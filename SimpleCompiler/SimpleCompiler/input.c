int gval, g2 = 0.5, g3 = 3;
float fval, f2 = 0.5, f3 = 3;

int test(int a){
    if(a > 5){
        return 1;
    }

    return 0;
}

void printTest(int n){
    while(n > 0){
        print(test(n));
        n = n - gval;
    }
}

float getAvg(float a, float b){
    float c = (a + b) / 2;
    return c;
}

int main(){
    int a = 2, b = 3, c;
    float d = 0.5;
    gval = 1;
    print(gval);
    printTest(10);

    return 0;
}