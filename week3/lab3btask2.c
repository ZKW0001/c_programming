#include <stdio.h>

int main(){
    int grade, gradevalue;
    printf("Enter a numerical grade: ");
    scanf("%d", &grade);
    gradevalue = grade/10;
    
    if (grade < 0 || grade > 100)
    {
        printf("error");
    }
    else{

        switch (gradevalue){

            case 10: printf("A");
            break;

            case 9:printf("A");
            break;

            case 8: printf("B");
            break;

            case 7: printf("C");
            break;

            case 6: printf("D");
            break;

            // case 5: printf("F");
            // break;

            // case 4: printf("F");
            // break;

            // case 3: printf("F");
            // break;

            // case 2: printf("F");
            // break;

            // case 1: printf("F");
            // break;

            default: printf("F");
            break;

        }
    }

    return 0;
}