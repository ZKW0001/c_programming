#include <stdio.h>

int main(){
    float c=0, f=0, capprox=0;

    float minus = 0;

    while (minus<=4){
        capprox = (f - 30.0)/2.0;
        c = (f-32.0)*5.0/9.0;
        minus = c - capprox;
        f++;
    }

    printf("Value of F is %f", --f);

    return 0;
}