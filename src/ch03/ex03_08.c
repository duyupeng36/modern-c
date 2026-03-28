/**
 * ex03_08.c - [[fallthrough]] 属性
 *
**/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (isalpha(letter))
    {
        // 统一转化为小写字母
        letter = tolower(letter);
        switch (letter)
        {
        case 'a':
            [[fallthrough]]; // C23 起，用于说明此处需要贯穿
        case 'e':
            [[fallthrough]];
        case 'i':
            [[fallthrough]];
        case 'o':
            [[fallthrough]];
        case 'u':
            printf("You entered a voewl.\n");
            break;

        default:
            printf("You entered a consonat\n");
            break;
        }
    }
    else
    {
        printf("You did not enter a letter.\n");
    }
    return 0;
}
// ex03_08.c