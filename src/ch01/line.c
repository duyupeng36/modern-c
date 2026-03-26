/**
 * line.c - count lines in input
 */

#include <stdio.h>

int main(void)
{
    long nl;
    int ch;
    nl = 0;
    while ((ch = getchar()) != EOF)
        if (ch == '\n')
            ++nl;
    printf("%ld\n", nl);
}