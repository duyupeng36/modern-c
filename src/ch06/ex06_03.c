/**
 * ex06_03.c - 函数原型
 *
**/
#include <stdio.h>

// 声明 power() 函数
double power(double x, int n);

int main(void)
{
    for (int i = -3; i <= 3; ++i)
    {
        printf("%10g", power(8.0, i));
    }
    return 0;
}

// 定义 power() 函数
double power(double x, int n)
{
    double result = 1.0;
    if ( n >= 0)
    {
        for (int i = 1; i <= n; ++i)
        {
            result *= x;
        }
    }
    else
    {
        for (int i = 1; i <= -n; ++i)
        {
            result /= x;
        }
    }
    return result;
}
// ex06_03.c