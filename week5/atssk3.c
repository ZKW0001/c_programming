#include <stdio.h>

int main(){
    double arr[] = {3.2, 2.4, 6.6, 7.3, 4.2, 9.9, 12.0, -3.2, -4.1, 5.4};
    double sum=0, average=0;
    int i;
    for (i = 0; i<10; i++){
        sum +=arr[i]; 

    }   
    average = sum/sizeof(arr)*sizeof(arr[0]);

    printf("sum is %.2f\n", sum);
    printf("average is %.2f\n", average);
    return 0;
}