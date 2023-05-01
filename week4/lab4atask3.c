/* Lab 4a Task 3 */

#include <stdio.h>

int main (void) {


   /* Step a):
      Try to predict the result of the following do loop: */
      
    //   int i = 9384;
    //   do {
    //      printf("%d ", i);
    //      i /= 10;
    //   } while (i>0);
      
      /* Test you prediction by un-commenting the code, compiling and running it */
      
      
   /* Step b)
      Re-write the loop shown in Step a as a for loop.
      <write your code below, and test the program>  */

    // int i=9384;

    // for (int n=1; i>0; n++){
    //     printf("%d ", i);
    //     i /= 10;

    // }



   /* Step c):
      Try to predict the result of the following for loop: */
      
    //   int j;
    //   for (int i=5,j=i-1; i>0; --i,j=i-1)  {
    //       printf("i = %d, j = %d\n",i, j);
    //   }
      
      /* Test you prediction by un-commenting the code, compiling and running it */
 

   /* Step d)
      Re-write the loop shown in Step c as a while loop.
      <write your code below, and test the program>  */

    int j, i=5;

    while (i>0)
    {
        j = i-1;
        printf("i = %d, j = %d\n", i--, j);
    }

  return 0;
}