/**
 * fahr2celsius.c - Convert Fahrenheit to Celsius.
 * Output of Fahrenheit vs. Celsius Temperature Control Table
 *
 * for fahr = 0, 20, ..., 300; integer arithmetic version
 */

#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of fahrenheit temperature
    upper = 300; // upper limit of fahrenheit temperature
    step = 20;   // step size
    fahr = lower;

    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
