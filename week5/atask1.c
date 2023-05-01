#include <stdio.h>

/* Lab 5a Task 1 */

/* Split this task as follows: one person works on parts a) and b),
   while the second works on parts c) and d). Then check each others' work. */

int main (void) {


   /* Step a):
      What is printed out by the following statements?*/

        //    double pi = (double)22/(double)7;
        //    printf("pi = %lf\n", pi);unsigned 

    //   Test your prediction by compiling and running the program.
    //   Suppose that i and j are variables of type int.
      
    //   Using a type cast, modify the first statements so that "pi" 
    //   includes a fractional part. 
      


      
   /* Step b)
      Suppose that i is of type int, j is of type long, and
      k is a variable of type unsigned int. What is the resulting type
      of the expression:   i + (int) j * k   ?
      Test you prediction by writing some simple statements.
      Write your code below, and test the program.  */

    int i=-100;
    long j = 2;
    unsigned int k=3;
    unsigned int answer;

    answer = i + (int) j * k;

    printf("%d" , answer);



   /* Step c):
      Suppose next that f is a variable of type float, d is a variable 
      of type double, and i is of type int as before. Explain what conversions
      take place during the execution of the following statement?
                        d = i + f;
      Test you prediction by writing some simple statements.
      Write your code below, and test the program.  */
 
    // float f = 1.5;
    // double d;
    // int i = 22;

    // d = i + f;
 
    // printf("%f", d);

   /* Step d)
      Suppose that the variables d and d_frac_part are both of type double,
      where d_frac_part contains the fractional part of d. Thus, for example
      d is 7.853 and d_frac_part is 0.853. Construct a statement that assigns the fractional
      part to d_frac_part.
      Write your code below, and test the program>  */

    // double d = 7.835, d_frac_part;
    // d_frac_part = d - (int)d;

    // printf("%f", d_frac_part);



  return 0;
}