/**
 * ex06_04.c - 交换两个变量值
 *
**/
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int value1 = 20;
    int value2 = 30;
    printf("before swap in main: value1 = %d; value2 = %d\n", value1,value2);
    swap(value1, value2);
    printf("after swap in main: value1 = %d; value2 = %d\n", value1,value2);

    return 0;
}

void swap(int a, int b)
{
    printf("befor swap in swap: a = %d; b = %d\n", a, b);
    a += b;
    b = a - b;
    a = a - b;
    printf("after swap in swap: a = %d; b = %d\n", a, b);
}
// ex06_04.c