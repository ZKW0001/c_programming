#include <stdio.h>
#include <math.h>

int main(){
    
    int nth, i, i1=1;
    double e=1;

    printf("Enter the number of times of irritation:");
    scanf("%d",&nth);

    long long factorial(int n)          //function for factorial calculation
    {
        long long result = 1;

        for (i=1; i<=n; i++)
        {
            result *= i; 
        }

        return result;

    }
    
    
    
    while(i1<=nth){
        e += 1.0/factorial(i1++);
    }

    printf("The result is %lf", e);
    
    
    return 0;
}