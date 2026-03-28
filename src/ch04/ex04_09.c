/**
 * ex04_09.c - continue
 *
**/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%11s %11s %11s\n", "Character", "Hexadecimal", "Decimal");

    // 这里我们使用 int 类型。如果使用 char 类型，程序将永远不会退出
    for (int ch = 0; ch <= 127; ++ch)
    {
        if (!isprint(ch))
        {
            continue;
        }
        printf("%11c %#11x %11d\n", ch, ch, ch);
    }
    return 0;
}
// ex04_09.c