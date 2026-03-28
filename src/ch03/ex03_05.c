/**
 * ex03_05.c - 确定一个人是否有贷款风险
 *
**/
#include <stdio.h>

int main(void)
{
    int age = 0;
    int income = 0;
    int balance = 0;

    printf("Please enter your age in years: ");
    scanf("%d%*c", &age);
    printf("Please enter your annual income in dollars: ");
    scanf("%d%*c", &income);
    printf("Please enter your current account balance in dollars: ");
    scanf("%d%*c", &balance);

    // 年至少 21 岁, 年薪 25000 或拥有存款 100000
    if (age >= 21 && (income >= 25000 || balance >= 100000))
    {
        // 可以贷款，计算贷款最大金额。年薪的两倍和存款一半中最小的
        int loan = 0;

        if (2 * income < balance / 2)
        {
            loan = 2 * income;
        }
        else
        {
            loan = balance / 2;
        }
        printf("\nYou can borrow up to $%d.", loan);
    }
    else
    {
        printf("\nUnfortunately, you don't qualify for a loan.");
    }
    return 0;
}
// ex03_05.c