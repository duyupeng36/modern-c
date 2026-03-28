/**
 * ex03_03.c - 检查一个数是否为偶数
 *
**/
#include <stdio.h>

int main(void)
{

    long number = 0;
    printf("Enter an integer less than 2 billion: ");
    scanf("%d%*c", &number);

    if (number % 2)
    {
        printf("Your number is odd.");
    }
    else
    {
        printf("Your number is even.");
    }
    return 0;
}
// ex03_03.c