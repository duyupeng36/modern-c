/**
 * ex02_01.c - Writing the value of an integer variable to standard output
 */

#include <stdio.h>

int main(void)
{
    int apple_count = 15;
    int orange_count = 5;
    int total_fruit = apple_count + orange_count;

    printf("The value of apple_count is %d\n", apple_count);
    printf("The value of orange_count is %d\n", orange_count);
    printf("The value of total_fruit is %d\n", total_fruit);

    return 0;
}