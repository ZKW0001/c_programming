#include <stdio.h>

int main(){

    int arr[3][4] = {{8, 16, 9, 52},
                    {3, 15, 27, 6},
                    {14, 25, 2, 10}};

    int sum=0, i, i2;

    for (i=0; i<4; i++){
        for (i2=0; i2<3; i2++){
            sum += arr[i2][i];
        }
        }
    printf("sum = %d", sum);


    return 0;
}