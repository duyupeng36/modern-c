/**
 * ex03_07.c - 判断从键盘输入的字母是否是元音字母
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
        case 'a': case 'e': case 'i': case 'o': case 'u':
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
// ex03_07.c