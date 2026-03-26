/**
 * fahr2celsius_for.c - Convert Fahrenheit to Celsius.
 * Output of Fahrenheit vs. Celsius Temperature Control Table
 *
 * for fahr = 0, 20, ..., 300; floating-point arithmetic version
 */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   // lower limit of fahrenheit temperature
    upper = 300; // upper limit of fahrenheit temperature
    step = 20;   // step size

    for (fahr = lower; fahr <= upper; fahr = fahr + step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%5.2f %9.2f\n", fahr, celsius);
    }
    return 0;
}