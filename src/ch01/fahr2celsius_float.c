/**
 * fahr2celsius_float.c - Convert Fahrenheit to Celsius.
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

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.2f %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}