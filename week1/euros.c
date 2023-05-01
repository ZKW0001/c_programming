#include <stdio.h>

int main(){
    int euro;
    printf("please enter the amount of euros:");
    scanf("%d", &euro);

    int euro50 = euro / 50;

    int euro20 = (euro - (50 * euro50)) / 20;

    int euro10 = (euro - (50 * euro50) - (20 * euro20)) / 10;

    int euro5 = (euro - (50 * euro50) - (20 * euro20) - (10 * euro10)) / 5;

    int euro1 = (euro - (50 * euro50) - (20 * euro20) - (10 * euro10) - (5 * euro5)) / 1;

    printf("50 Euro notes: %d\n", euro50);
    printf("20 Euro notes: %d\n", euro20);
    printf("10 Euro notes: %d\n", euro10);
    printf("5 Euro notes: %d\n", euro5);
    printf("1 Euro coins: %d\n", euro1);


    return 0;


}
