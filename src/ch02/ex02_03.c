/**
 * ex02_03.c - 格式化输出演示
**/

#include <stdio.h>

int main(void)
{
    int count = 0;
    int value = 123;

    printf("The value is %d%n.\n", value, &count);
    printf("Output bytes %d.\n", count);
    return 0;
}