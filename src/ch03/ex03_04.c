/**
 * ex03_04.c - 计算股票经纪人的佣金
 *
**/
#include <stdio.h>

int main(void)
{
    double amount = 0;       // 交易额
    double commission = 0;  // 佣金

    printf("Enter your transaction amount: ");
    scanf("%lf%*c", &amount);

    if (amount < 2500.)
        commission = 30 + 0.017 * amount;
    else if (amount < 6250) // 走到这分支，代表 amount 一定是大于 2500.
        commission = 56 + 0.0066 * amount;
    else if (amount < 20000)
        commission = 76 + 0.0034 * amount;
    else if (amount < 50000)
        commission = 100 + 0.0022 * amount;
    else if (amount < 500000)
        commission = 155 + 0.0011 * amount;
    else
        commission = 255 + 0.0009 * amount;

    printf("Your transaction amount is %.2f$, and you must pay commission %.2f$.", amount, commission);

    return 0;
}
// ex03_04.c