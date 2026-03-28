/**
 * ex03_06.c - switch 语句的用法
 *
**/
#include <stdio.h>

int main(void)
{
    printf("Your electronic recipe book is at your service.\n");
    printf("You can choose from the following dlicious dishes:\n");
    printf("1. Boiled eges\n");
    printf("2. Fried eges\n");
    printf("3. Scrambled eges\n");
    printf("4. Coddled eges\n");

    int choice = 0;
    scanf("%d%*c", &choice);

    switch (choice)
    {
    case 1:
        printf("Boiled some eggs.\n");
        break;
    case 2:
        printf("Fry some eggs.\n");
        break;
    case 3:
        printf("Scramble some eggs.\n");
        break;
    case 4:
        printf("Coddle some eggs.\n");
        break;
    default:
        printf("You entered a wrong number - try raw eggs.\n");
        break;
    }
    return 0;
}
// ex03_06.c