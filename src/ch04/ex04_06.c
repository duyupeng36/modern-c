/**
 * ex04_06.c - while 语句
 *
**/
#include <stdio.h>

int main(void)
{
    unsigned int limit = 0;
    printf(
        "This program calculates n! and the sum of the intergers "
        "up to n for value 1 to limit.\n"
        "What upper limit for n would you like? "
    );
    scanf("%u%*c", &limit);

    const char * table_header_format = "%8s %8s %20s\n";
    const char * table_row_format = "%8llu %8llu %20llu\n";
    printf(table_header_format, "integer", "sum", "factorial");

    unsigned long long n = 0, sum = 0, factorial = 1;
    while (++n <= limit)
    {
        sum += n;
        factorial *= n;
        printf(table_row_format, n, sum, factorial);
    }
    return 0;
}
// ex04_06.c