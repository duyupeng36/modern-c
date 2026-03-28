/**
 * ex04_03.c - 使用浮点数控制 for 循环
 *
**/
#include <stdio.h>
#define __USE_XOPEN
#include <math.h>

int main(void)
{
    const size_t values_per_line = 3;

    size_t values_current_line = 0;

    for (double radius = 0.2; radius <= 3.0; radius += 0.2)
    {
        const auto area = M_PI * radius * radius;
        printf("radius = %4.2f, area = %5.2f; ", radius, area);
        if (++values_current_line  == values_per_line)
        {
            putchar('\n');
            values_current_line = 0;
        }
    }
    putchar('\n');

    return 0;
}
// ex04_03.c