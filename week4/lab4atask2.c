#include <stdio.h>

// for loop

// int main(){
//     int two=1;

//     for (int n=0; n<=11; n++)
//     {
//         printf("2^%d= %d\n", n, two);
//         two *= 2;
//     }


//     return 0;
// }

//while loop

// int main(){
//     int two = 1, n = 0;
//     while (n<=11)
//     {
//         printf("2^%d= %d\n", n++, two);
//         two *= 2; 
//     }

//     return 0;
// }

//do loop

int main(){
    int two = 1, n = 0;
    do
    {
       printf("2^%d= %d\n", n++, two);
       two *= 2;
    }
    while (n<=11);

    return 0;
}