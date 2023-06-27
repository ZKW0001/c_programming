#include <stdio.h>
#define N 5

void min (int a[], int n, int *min);

int main(void) {
int b[N], smallest;
 	printf("Enter %d numbers: ", N);
	for (int i=0; i<N; i++) {
		scanf("%d", &b[i]);
	}

	min(b,N,&smallest);

	printf("\nThe smallest number entered was: %d\n", smallest);
}

void min (int a[], int n, int *min) {
	*min = a[0];
	for (int i=1; i<n; i++) {
		if (a[i] < *min)
		    *min = a[i];
	}
}


// void max (int a[], int n, int *maximum);

// int main(void) {
// int b[N], largest;
//  	printf("Enter %d numbers: ", N);
// 	for (int i=0; i<N; i++) {
// 		scanf("%d", &b[i]);
// 	}

// 	max(b,N,&largest);

// 	printf("\nThe largest number entered was: %d\n", largest);
// }

// void max (int a[], int n, int *maximum) {
// 	*maximum = a[0];
// 	for (int i=1; i<n; i++) {
// 		if (a[i] > *maximum)
// 		    *maximum = a[i];
// 	}
// }

