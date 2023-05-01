#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(){

    float v, r=5;

    v = (4.0/3.0)* M_PI * r*r*r;

    printf("%d", v);

    return 0;
}