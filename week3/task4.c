/* Lab 3a Task 4
   In each step a-d you are asked to write some
   statements to test your predictions. The solution
   to step a) is given as an example. */

#include <stdio.h>

int main (void) {

   /* Step a):
      Declare and assign variables i=2, j=3 and k (unassigned)
      try to predict the result of the expression:
      k = i * j == 6
      Test your prediction with a suitable printf statement. */
      /* <the solution to this is shown below>  */
    //   int i=2, j=3, k;
    //   printf("k = %d * %d == 6 evaluates to %d\n",i,j, k = i * j == 6);

   /* Step b):
      Next assign i=5, j=10 and k=1.
      Try to predict the result of the expression:
      k > i < j
      Test your prediction with a suitable printf statement. */
      //<write the code here>

    //   int i=5, j=10, k=1;

    //   printf("k > i < j results in %d", k > i < j);
      
      


   /* Step c):
      Next assign i=3, j=2 and keep k=1.
      Try to predict the result of the expression:
      (i < j) == (j < k)
      Test your prediction with a suitable printf statement. */
      //<write the code here>

    //   int i = 3, j = 2, k = 1;

    //   printf("(i < j) == (j < k) results in %d", (i < j) == (j < k));


      
      

      
   /* Step d):
      Next keep i=3 and assign j=4 and k=5.
      Try to predict the result of the expression:
      i % j + i < k
      Test your prediction with a suitable printf statement. */
      //<write the code here>

      int i =3, j = 4, k =5;

      printf("i \%% j + i < k results in %d", i % j + i < k);
      



  return 0;
}