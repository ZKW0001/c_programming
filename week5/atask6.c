#include <stdio.h>

int main(){

    int arr[] = {415, 243, 755, 452, 676, -210, -45, 6, 82, -73}, i=0;
    int size = sizeof(arr) / sizeof(arr[0]), x;
    int arr2[9];

    while (i < size){

        x = arr[i]*arr[i];
        arr2[i] = x;
        i++;

    }

    printf("array = %d", arr2[]);



    return 0;
}