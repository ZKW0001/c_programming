#include <stdio.h>

int main()
{
    double arr[] = {3.2, 2.4, 6.6, 7.3, 4.2, 9.9, 12.0, -3.2, -4.1, 5.4};
    double sum=0, average;
    int i = 0, loop_length;
    loop_length = sizeof(arr) / sizeof(arr[0]);
    while (i<loop_length)
    {
        
        sum += arr[i++];
       
    }
    average = sum / loop_length;
    printf("sum = %.2lf\naverage = %.2lf", sum, average);


    return 0;





}