#include <stdio.h>
#include <math.h>

int main(){

    int value, i, even=0;
    printf("Enter the value:");
    scanf("%d", &value);

    double sq_root = sqrt(value);

    for(i = 1; i < sq_root/2; i++){
        even += 2;

        int even2 = even*even;

        printf("%d\n", even2); 


    }

    return 0;
}