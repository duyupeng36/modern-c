/**
 * ex05_03.c - 指针算术运算与比较运算
 *
**/
#include <stdio.h>

int main(void)
{

    int height[] = {176, 168, 190, 182, 175, 155};
    const size_t size = sizeof(height) / sizeof(height[0]);
    int total = 0;

    for (int * p = height; p < height + size; ++p)
    {
        total += *p;
    }

    printf("total = %d\n", total);
    return 0;
}
// ex05_03.c