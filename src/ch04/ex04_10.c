/**
 * ex04_10.c - 排序数组
 *
**/
#include <stdio.h>
#include <stdbool.h>

#define SIZE 1000
int main(void)
{
    double numbers[SIZE];
    size_t count = 0;

    while (true) {
        double number;
        printf("Enter a non-zero number, or 0 to end: ");
        scanf("%lf", &number); // 没有警告
        if (number == 0.0)
            break;
        numbers[count] = number;

        if (++count == SIZE) {
            printf("Sorry, I can only store %lu values.\n", count);
            break;
        }
    }

    if (count == 0) {
        printf("Nothing to store...\n");
        return 0;
    }

    printf("Starting sort...");
    while (true) {
        bool swapped = false;
        for (size_t i = 0; i < count - 1; ++i) {
            if (numbers[i] > numbers[i + 1]) {
                swapped = true;
                numbers[i] += numbers[i + 1];
                numbers[i + 1] = numbers[i] - numbers[i + 1];
                numbers[i]  -= numbers[i + 1];
            }
        }
        // 本次循环没有发生交换动作，说明序列已排序完成，应该退出循环
        if (!swapped) {
            break;
        }
    }
    printf("Your date in ascending sequence:\n");
    const size_t perline = 10;
    size_t n = 0;
    for (size_t i = 0; i < count; ++i) {
        printf("%8.2f", numbers[i]);
        if (++n == perline) {
            printf("\n");
            n = 0;
        }
    }
    printf("\n");
    return 0;
}
// ex04_10.c