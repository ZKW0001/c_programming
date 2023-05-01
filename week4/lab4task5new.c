#include <stdio.h>

int main(){

    int nth, i, result=1;
    double e = 1;

    printf("Please enter the number of tiems of irritation:");
    scanf("%d", &nth);

    for (i=1; i<=nth; i++){
        result *= i;
        e += 1.0/result;

    }

    printf("RESULT IS %lf", e);




    return 0;
}