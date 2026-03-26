/**
 * ex01_05.c - count blanks, tabs, and newlines
**/

#include <stdio.h>

int main(void)
{
    int ch, blanks, tabs, newlines;

    blanks = tabs = newlines = 0;

    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case ' ':
            ++blanks;
            break;
        case '\t':
            ++tabs;
            break;
        case '\n':
            ++newlines;
            break;
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return 0;
}