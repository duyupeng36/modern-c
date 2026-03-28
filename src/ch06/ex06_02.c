/**
 * ex06_02.c - 调用 power() 函数
 *
**/
#include <stdio.h>

int main(void)
{
    for (int i = -3; i <= 3; ++i)
    {
        printf("%10g", power(8.0, i));
    }
    return 0;
}

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
// ex06_02.c