#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>



//task1
// int main(){

//     printf("%6d,%4d,%12.5e,%.4f,%-6.2g", 86, 1040, 30.253, 83.162, 0.000001);


//     return 0;
//}

//task2

int main(){
    double q1, q2, r, F;
    printf("Enter the value of Q1: ");
    scanf("%lf",&q1);
    printf("Enter the value of Q2: ");
    scanf("%lf",&q2);
    printf("Enter the value of r: ");
    scanf("%lf",&r);

    F = (1.0)/(4.0*M_PI*8.85e-12)*((q1*q2)/r);

    printf("The value F is: %.2f", F);


    return 0;
}