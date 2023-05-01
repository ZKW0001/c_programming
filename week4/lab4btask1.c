/* Lab 4b Task 1 */

/* This program uses Newton's method for computing the 
   square root of a positive, floating-point number.
   */

#include <stdio.h>
#include <math.h> /* included because we are using fabs() 
                     which returns the absolute value of
                     a floating-point number. */

/* define TOLERANCE: */
#define TOLERANCE 0.00001

int main(void)
{
 /* declare double variables as needed: */
    double x, y = 1.0, y_new, error;

 /* Step a)
    Prompt the user to enter a positive number and save it in x.
    <write your code below>*/

    printf("Enter a positive number: ");
    scanf("%lf", &x);
 
 /* Print the table header: */
    printf("\t\t\t\taverage of\n");
    printf("    x\t       y\tx/y      y and x/y\n");
    printf("-------------------------------------------\n");

 do {  /* start of do loop */
 
 /* Step b)
    Calculate y_new:
    <write your code below> */
    y_new = (y + x/y)/2.0;

 /* Step c)
    Calculate the error. Hint use:  error = fabs((y_new - y) / y_new);
    <write your code below> */
    error = fabs((y_new - y) / y_new);

/* print out a row of the table: */
    printf("%lf   %lf   %lf   %lf\n", x,y,(x/y),y_new);

 /* Step d)
    Assign y_new to y:
    <write your code below> */

    y = y_new;

 /* loop condition statement: */
 } while (error >= TOLERANCE);


 /* Step e)
    Print out the result:
    <write your code below> */

    printf("Squre root: %.5lf", y);


 return 0;
}