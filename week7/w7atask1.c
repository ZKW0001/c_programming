/* Lab 7a Task 1  */

/* Complete the six steps as described in the comments. Step 1 is given to you.

*/

#include <stdio.h>


int main(void) {
        /* Step 1: Declare a double variable d, and a double pointer variable d_ptr: */
        double d, *d_ptr;
        
        /* Step 2: Write a statement that makes d_ptr point to d: */

        d_ptr = &d;
        
        /* Complete the remaining steps by writing statements that use
           only the pointer variable d_ptr (AND NOT using d): */
           
        /* Step 3: Assign 3.0 to d (Remember to use only d_ptr in the statement!) */

        *d_ptr = 3.0;        


        /* Step 4: Write a single statement that prints out the value of d
           (remembering to use only d_ptr in the statement) : */

        printf("The value of d is %f\n", *d_ptr);
        
        /* Step 5: Write a single statement that prints out the address of d: */

        printf("The address of d is %p\n", d_ptr);
        /* Step 6: Write a single statement that prints out the value of d multiplied by 5
           (remembering to use only d_ptr in the statement): */

        printf("2 times d is %f", *d_ptr*5);


	return 0;
}


