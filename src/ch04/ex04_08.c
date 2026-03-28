/**
 * ex04_08.c - 嵌套循环-输出九九乘法表
 *
**/
#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 1; j < i+1; ++j)
        {
            printf("%d * %d = %-*d", j, i, j < 2 ? 3 : 4, i * j);
        }
        printf("\n");
    }
    return 0;
}
// ex04_08.c