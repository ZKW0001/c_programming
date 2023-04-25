#include <stdio.h>
#include <math.h>

int main(){

    int arr[99], i, i2=0;
    double arr2[99];

    for(i=99; i>=0; i--){

        arr2[i2] = sqrt(i+1);
        printf("%.3lf ",arr2[i2]);
        i2++;

    }





    return 0;
}