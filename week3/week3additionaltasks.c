#include <stdio.h>
// #include <math.h>

int main(){
    double a;
    
    int i, x=0, x2=-2,nth_power, plus_power, minus_power, loop;
    double plus=0, minus=0, sum;

    printf("Please enter the x in cos(x): ");
    scanf("%lf", &a);
    
    printf("Enter n for up to and including nth power of x in series:");
    scanf("%d", &nth_power);
    
    if (nth_power%2 == 0)
        plus_power = nth_power/4,
        minus_power = nth_power/4;

    else if (nth_power%2 == 1)
        plus_power = nth_power/4,
        minus_power = nth_power/4+1;

    else
        printf("error, fxxk off");



    long long factorial(int n)          //function for factorial calculation
    {
        long long result = 1;

        for (i=1; i<=n; i++)
        {
            result *= i; 
        }

        return result;

    }

    double pow(double base, int power)
    {
        double base_power = 1;
        for (loop=1; loop<=power; loop++)           //design a function calculating power (assume power >=0)
        {
            base_power *= base;
        }

        // printf("numb=%f\n", base_power);



        return base_power;
    }

    // printf("numberrrr=%f\n", pow(2,4));
    

    for (int y=0; y<plus_power; y++)            //for loop for the "+" part of nth power series
    {
        x += 4;

        // printf("x=%d\n", x);
        
        plus += pow(a,x)/factorial(x);
        

    }

    printf("plus is %.20lf\n",plus);

    
    for (int z=0; z<minus_power; z++)           //for loop for the "+" part of nth power series
    {
        x2 += 4;

        // printf("x2=%d\n", x2);
        
        minus -= pow(a,x2)/factorial(x2);
        

    }

    printf("minus is %.20lf\n",minus);

    sum = 1 + plus + minus;               //add together

    printf("The Taylor series expresstion up to the %dth power of x is %.20lf", nth_power, sum);


    

    return 0;
}