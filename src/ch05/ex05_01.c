/**
 * ex05_01.c - 获取当前平台的指针大小
 *
**/
#include <stdio.h>

int main(void)
{
    printf("sizeof(double *) = %lu\n", sizeof(double *));
    printf("sizeof(  long *) = %lu\n", sizeof(long *));
    printf("sizeof(  char *) = %lu\n", sizeof(char *));
    return 0;
}
// ex05_01.c