/**
 * ex01_03.c - Convert Celsius to Fahrenheit.
 * Output of Celsius vs. Fahrenheit Temperature Control Table
 *
 * for celsius = 300, 280, ..., 0; floating-point arithmetic version
 */


#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    /* Print header */
    printf("Celsius Fahrenheit\n");
    printf("------- ----------\n");
    for (celsius = upper; celsius >= lower; celsius = celsius - step)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%6.1f %6.1f\n", celsius, fahr);
    }
    return 0;
}