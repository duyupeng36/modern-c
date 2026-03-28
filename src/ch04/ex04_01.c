/**
 * ex04_01.c - for 语句
 *
**/
#include <stdio.h>

#define SIZE 6

int main(void)
{
    unsigned height[SIZE] = {26, 37, 47, 55, 62, 75};

    unsigned total = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        total += height[i];
    }

    const unsigned average = total / SIZE;
    printf("The average height is %u.\n", average);

    unsigned count = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        if (height[i] < average)
            ++count;
    }
    printf("%u people are below average height\n", count);
    return 0;
}
// ex04_01.c