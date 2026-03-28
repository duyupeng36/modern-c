/**
 * ex05_02.c - 指针的各种用法
 *
**/
#include <stdio.h>

int main(void)
{
    int unit_price = 295;
    int count = 0;
    int discount_threshold = 25;
    double discount = 0.07;

    int *pcount = &count;
    printf("Enter the number of item you want: ");
    scanf("%d%*c", pcount);

    printf("The unit price is $%.2f\n", unit_price / 100.0);

    int *punit_price = &unit_price;
    int price = *pcount * *punit_price;
    int * pprice = &price;

    double net_price = 0;
    double* pnet_price = nullptr;  // C23
    pnet_price = &net_price;

    if (*pcount > discount_threshold)
    {
        printf("You qualify for discount of %.0f percent.\n", discount * 100);
        *pnet_price = price * (1 - discount) / 100;
    }
    else
    {
        net_price = *pprice / 100;
    }
    printf("The net price for %d items if $%.2f\n", *pcount, net_price);
    return 0;
}
// ex05_02.c