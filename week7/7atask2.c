#include <stdio.h>

#include <stdio.h>d

void swap (int *p, int *q) {
        /* save the value pointed to by p in a temporary variable: */
        int temp = *p;
        /* replace the value pointed to by p with that pointed to by q: */
	*p = *q;
	/* replace the value pointed to by q by that saved in the temporary variable: */
	*q = temp;
}


int main(void) {
        int first, second;
 	printf("Enter the value of the first number: ");
        scanf("%d", &first);
        printf("Enter the value of the second number: ");
        scanf("%d", &second);
        
        /* check: */
        printf("You entered: (first) %d and (second) %d\n", first, second);

	swap (&first, &second);

	printf("\nThe value of the first number is now %d\n", first);
	printf("\nThe value of the second number is now %d\n", second);
}

