#include <stdio.h>

int new(){
        int k, i = 1;
        k = i;
        return k;
    }


int main(void)
{
    printf("j = %d\n", new());
    printf("j = %d\n", new());

return 0;
}
