#include <stdio.h>

int main(){
    float num, max_value;
    printf("Enter a number:");
    scanf("%f",&num);
    max_value = num;

    while (num > 0){
        printf("Enter a number:");
        scanf("%f",&num);
        if (num > max_value)
            max_value = num;

    }

    printf("The largest number entered was %.2f", max_value);

    return 0;

}