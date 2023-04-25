#include <stdio.h>

int main(){


    // int i = 10;
    // do {
    // printf("T minus %d and counting\n", --i);
    // } while (i > 0);

    // for (int i = 10; i > 0; i--){
    // printf("T minus %d and counting\n", i);
    // break;
    // }
    // printf("%d",i);
    int i;
    long long factorial(int n)          //function for factorial calculation
    {
        long long result = 1;

        for (i=1; i<=n; i++)
        {
            result *= i; 
        }

        return result;

    }
    
    double k;
    k = 1.0/factorial(3);
    printf("EEEE=%lf", k);
    

    return 0;

}