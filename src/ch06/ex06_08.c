/**
 * ex06_08.c - 指向函数的指针
**/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int values[] = { 97, 23, 89, 75, 64, 91, 82, 77, 88, 99 };

    qsort(values, sizeof(values) / sizeof(values[0]), sizeof(values[0]), compare);
    printf("Sorted values: ");
    for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    return 0;
}