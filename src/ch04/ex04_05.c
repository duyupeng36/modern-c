/**
 * ex04_05.c - 计算一个数的平方
 *
 * x^2 = (x - 1)^2 + (2x - 1)
 *
 * 初始条件
 * i = 1; square = 1
 * i = 2; square += (2 * i - 1)
 *
**/
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer number: ");
    scanf("%d%*c", &n);

    int square = 1;

    // for (int i = 1; i < n; ++i, square += (2 * i - 1));
    for (int i = 1, odd = 3; i < n; ++i, square += odd, odd += 2);

    printf("The square of %d is %d.\n", n, square);
    return 0;
}
// ex04_05.c