/**
 * ex01_06.c - replace multiple blanks with a single blank
**/

#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case ' ':
            putchar(ch);
            while ((ch = getchar()) == ' ');
            if (ch != EOF)
                putchar(ch);
            break;
        default:
            putchar(ch);
            break;
        }
    }

    return 0;
}