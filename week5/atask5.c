#include <stdio.h>

int main(){
    double arr[] = {3.2, 2.4, 6.6, 7.3, 4.2, 9.9, 12.0, -3.2, -4.1, 5.4};
    int i, n;
    double max = arr[1], result;

    n = sizeof(arr) / sizeof(arr[0]);

    for (i=1; i<=n;){

        result = arr[++i];
        if (result > max)
        max = result; 

    }

    printf("result = %lf", max);


    return 0;
}