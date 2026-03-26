/**
 * ex01_04.c - varify that the expression getchar() != EOF is 0 or 1
**/

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        printf("getchar() != EOF is %d\n", c != EOF);
    printf("getchar() != EOF is %d\n", c != EOF);
    return 0;
}
