#include <stdio.h>


// task 1
// int main(){
//     int a, b;
//     printf("Enter a number with 2 digits:");
//     scanf("%c%c", &a, &b);



//     printf("The reversal is %c%c", b, a);




//     return 0;
// }

// //task 2
int main(){
    int a, b, c, d, e, number;

    printf("Enter a number between 0 and 10000:");

    scanf("%d",&a);

    if (a == 10000)
        number = 5;

    else if (a >= 1000 && a <= 9999)
        number = 4;

    else if (a >= 100 && a <= 999)
        number = 3;

    else if (a >= 10 && a <= 99)
        number = 2;
    
    else
        number = 1;

    printf("The number %d has %d digits.",a,number);


    return 0;
}


//task3
// int main(){

//     int a;
//     char* number;

//     printf("Enter a number between 0 and 9:");
//     scanf("%d", &a);

//     switch (a){
//         case 9: printf("number is nine");
//                 break;
//         case 8: printf("number is eight");
//                 break;
//         case 7: printf("number is seven");
//                 break;
//         case 6: printf("number is six");
//                 break;
//         case 5: printf("number is five");
//                 break;
//         case 4: printf("number is four");
//                 break;
//         case 3: printf("number is three");
//                 break;
//         case 2: printf("number is two");
//                 break;
//         case 1: printf("number is one");
//                 break;
//         case 0: printf("number is zero");
//                 break;

//         default: printf("error, fxxk off");;
//                 break;

//     }
    

//     return 0;
// }