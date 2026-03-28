/**
 * ex04_02.c - 获取数组长度
 *
**/
#include <stdio.h>

int main(void)
{
    int values[] = {2,3,5,7,11,13,17,19,23,29};
    printf("There are %lu elements in the array.\n", sizeof(values) / sizeof(values[0]));

    int sum = 0;
    const size_t size = sizeof(values) / sizeof(values[0]);

    for (size_t i = 0; i < size; ++i)
    {
        sum += values[i];
    }

    printf("The sum of the array elements is %d.\n", sum);
    return 0;
}
// ex04_02.c