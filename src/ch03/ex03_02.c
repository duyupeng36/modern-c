/**
 * ex03_02.c - 检查从键盘上输入的一个整数值
 *
**/
#include <stdio.h>

int main(void)
{
    printf("Enter an integer between 50 and 100: ");
    int value = 0;
    scanf("%d%*c", &value);

    // true ==> 非零; false ==> 0
    if (value)
    {
        printf("You have entered a value that is different from zero.\n");
    }

    if (value < 50)
    {
        printf("The value is invalid - it is less than 50.\n");
    }

    if (value > 100)
    {
        printf("The value is invalid - it is greater than 100.\n");
    }
    printf("You entered value is %d.\n", value);
    return 0;
}
// ex03_02.c