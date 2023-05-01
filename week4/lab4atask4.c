 #include <stdio.h>

 int main(){
 int x, i;
 printf("Enter a number: ");
 scanf("%d", &x);
    long long kevin(int n)          //function for factorial calculation
        {
            long long result = 1;

            for (i=1; i<=n; i++)
            {
                result *= i; 
            }

            return result;

        }

printf("The number is %d", kevin(x));

 }