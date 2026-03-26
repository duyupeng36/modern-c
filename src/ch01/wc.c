/**
 * wc.c - A simple implementation of the 'wc' command in C.
 */

#include <stdio.h>
#include <stdlib.h>

#define IN_WORD 1
#define OUT_WORD 0

int main(void)
{
    int ch;
    int lines, words, characters;
    int state = OUT_WORD;

    lines = words = characters = 0;

    while ((ch = getchar()) != EOF)
    {
        ++characters;
        if (ch == '\n')
            ++lines;
        if (ch == ' ' || ch == '\t' || ch == '\n')
            state = OUT_WORD;
        else
        {
            // 当前状态时 OUT_WORD 但是字符却不是空白字符
            // 此时，处于一个单词之中。单词数+1
            // 状态修改为 IN_WORD
            if (state == OUT_WORD)
            {
                state = IN_WORD;
                ++words;
            }
        }
    }
    printf("lines: %d words: %d characters: %d\n", lines, words, characters);
    return 0;
}