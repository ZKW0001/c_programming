#include <stdio.h>

int main(){
    float x, y;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    y = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;

    printf("y = %.2f", y); 



    return 0;
}
