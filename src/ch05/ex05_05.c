/**
 * ex05_05.c - 通过指针访问二维数组
 *
**/
#include <stdio.h>

int main(void)
{
    double carrots[3][4] = {
        {2.5, 3.2, 3.7, 4.1},
        {4.1, 3.9, 1.6, 3.5},
        {2.8, 2.3, 0.9, 1.1}
    };

    for (double (*p)[4] = carrots; p < carrots + 3; ++p) {
        for (double *q = *p; q < (*p) + 4; ++q) {
            printf("%7.2f", *q);
        }
        printf("\n");
    }
    return 0;
}
// ex05_05.c