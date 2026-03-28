/**
 * ex06_06.c - 传递数组给函数
 *
**/
#include <stdio.h>

double average(double array[], size_t count);

int main(void)
{
    double values[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    printf("Average = %.2f\n", average(values, sizeof(values)/sizeof(values[0])));
    return 0;
}

double average(double array[], size_t count)
{
    double total = 0.0;
    for (size_t i = 0; i < count; ++i)
    {
        total += array[i];
    }
    return total / count;
}
// ex06_06.c