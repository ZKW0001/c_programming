#include <stdio.h>

double poly(double x){

    double result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x -7*x - 6;

    return result;
}

int main(){

    double x;

    printf("Enter:");
    scanf("%lf", &x);

    printf("Result = %lf", poly(x));


    return 0;
}