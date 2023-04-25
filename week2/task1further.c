#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <complex.h>


//task1
// int main(){

//     double x, pi;

//     printf("Enter a value: ");
//     scanf("%lf", &x);

//     pi = x * M_PI;

//     printf("%lf", sin(pi));


    

//     return 0;    
// }

//task2

// int main(){

//     double complex z = 1.0 + 2.0*I;

//     printf("Complex number z = %.2f + %.2fj\n", creal(z), cimag(z));

//     return 0;
// }

//task2.x

int main(){
    float complex z1 = 1.0 + 2.0*I;
    float complex z2 = 1.0 - 4.0*I;

    printf("Complex number z1 = %.0f + %.0fj\n", creal(z1), cimag(z1));
    printf("Complex number z2 = %.0f + %.0fj\n", creal(z2), cimag(z2));

    float complex z3 = z1 * z2;

    printf("Complex number z3 = %.0f + %.0fj\n", creal(z3), cimag(z3));


    return 0;
}

