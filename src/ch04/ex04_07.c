/**
 * ex04_07.c - 计算整数的位数
 *
**/
#include <stdio.h>

int main(void)
{
    long long number = 0;
    printf("Enter an integer number: ");
    scanf("%lld%*c", &number);

    unsigned count = 0;
    do {
        number /= 10;
        ++count;
    } while (number != 0);  // 适配输入负数的情形
    printf("The number of digits you enter the integer is %u.\n", count);

    return 0;
}
// ex04_07.c