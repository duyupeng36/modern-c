/**
 * ex01_02.c - Convert Celsius to Fahrenheit.
 * Output of Celsius vs. Fahrenheit Temperature Control Table
 *
 * for celsius = 0, 20, ..., 300; floating-point arithmetic version
 */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   // lower limit of celsius temperature
    upper = 300; // upper limit of celsius temperature
    step = 20;   // step size

    /* Print header */
    printf("Celsius Fahrenheit\n");
    printf("------- ----------\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        // %-10.2f: left-justify the floating-point number in a field of width 10, with 2 digits after the decimal point
        // %-7.2f: left-justify the floating-point number in a field of
        printf("%-7.2f %-10.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}