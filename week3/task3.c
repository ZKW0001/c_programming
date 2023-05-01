/* Lab 3a Task 3
   In each step a-h you are asked to write some
   statements to test your predictions. The solution
   to step a) is given as an example.
 */

#include <stdio.h>

int main (void) {

   /* Step a):
      Declare two int variables i and j, and assign 1 to i.
      Try to predict the result of:
      j = i++ - 1;
      Test your prediction with a suitable printf statement. */
      /* <the solution to this is shown below>  */
    //   int i=1, j;
    //   printf("Start with: i=%d\n",i);
    //   j = i++ - 1;
    //   printf("j = i++ - 1 results in i=%d j=%d\n",i,j);





   /* Step b):
      Declare a third int variable k.
      Assign i=10 and j=5, and try to predict the result of:
      k = i++ - ++j;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    //   int i=10, j=5, k;

    //   printf("Start with: i=%d, j=%d\n",i,j);

    //   k = i++ - ++j;

    //   printf("k=i++ - ++j results in i=%d, j=%d, k=%d\n",i,j,k);





   /* Step c):
      Next assign i=7 and j=8, and try to predict the result of: 
      k = i++ - --j;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    // int i=7, j=8, k;

    // printf("Start with: i=%d, j=%d\n",i,j);

    // k = i++ - --j;

    // printf("k = i++ - --j results in i=%d, j=%d, k=%d\n", i, j, k);





   /* Step d):
      Declare a fourth int variable p, and assign i=2 and j=1 and k=5.
      Try to predict the result of: 
      p = i++ - j++ + --k;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    // int i=2, j=1, k=5, p;

    // printf("Start with: i=%d, j=%d, k=%d\n",i,j,k);

    // p = i++ - j++ + --k;

    // printf("p = i++ - j++ + --k results in i=%d, j=%d, k=%d, p=%d\n", i, j, k, p);

    







      
   /* Step e):
      Next assign i=5 and try to predict the result of:
      j = ++i * 3 - 2;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    //   int i = 5, j;

    //   j = ++i *3 -2;

    //   printf("j = ++i *3 -2 results in i = %d, j = %d", i, j);




      
   /* Step f):
      Next assign i=5 and try to predict the result of:
      j = 3 - 2 * i++;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    //   int i = 5, j;

    //   j = 3 - 2 * i++;

    //   printf("j = 3 - 2 * i++ results in i=%d. j=%d", i,j);







   /* Step g):
      Next assign i=7 and try to predict the result of:
      j = 3 * i-- + 2;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    //   int i = 7, j;

    //   j = 3 * i-- + 2;

    //   printf("j = 3 * i-- + 2 results in i=%d, j=%d", i,j);




      
   /* Step h):
      Finally assign i=7 and try to predict the result of:
      j = 3 + --i * 2;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

    int i =7, j;

     j = 3 + --i * 2;

     printf(" j = 3 + --i * 2 results in i=%d, j=%d", i, j);







  return 0;
}