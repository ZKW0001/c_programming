#include <stdio.h>

//a

double area(double height, double base){

    double area_of_triangle = height * base;

    return area_of_triangle;
}

int main(){
    double a, b;
    printf("Please enter height, base:");
    scanf("%lf,%lf", &a, &b);

    printf("The area is %.3lf",area(a, b));

    return 0;

}

