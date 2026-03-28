/**
 * ex03_01.c - 演示比较运算符
 *
**/
#include <stdio.h>

int main(void)
{
    char first;
    char second;
    printf("Enter a character: ");
    scanf("%c%*c", &first);
    printf("Enter a second character: ");
    scanf("%c%*c", &second);

    printf("The value of the expression %c < %c is %d.\n", first, second, first < second);
    printf("The value of the expression %c == %c is %d.\n", first, second, first == second);
    return 0;
}
// ex03_01.c