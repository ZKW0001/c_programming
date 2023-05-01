#include <stdio.h>

double swap(int x);

int main(void)  {
    int x;
    printf("\n Enter a number between 10 and 100: ");
    scanf("%d", &x);
    printf(" The number with digits reversed: %g\n", swap(x));

    return 0;
} /* end main */

double swap(int number)  {
    int first_digit = number/10; /* get first digit */
    int second_digit = 10 * (number - first_digit*10);
    return second_digit + first_digit;
} /* end swap */