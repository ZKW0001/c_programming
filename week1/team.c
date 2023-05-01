#include <stdio.h>
#include <direct.h>
#pragma warning(disable : 4996)
#define BUF_SIZE 260



int main () {
    char buffer[BUF_SIZE];
    char *p;

    p = getcwd( buffer, BUF_SIZE );

    printf("Name\t\tCourse\tPlace of birth\n-----------------------------------------\nKaiwen Zhao\t\"eee\"\tLondon\n\netc...\n");
    printf("The path to my C folder is: %s.", p);
    return 0;
}