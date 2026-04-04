#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(void)
{

    char *lines[] = {
        "defghi",
        "jklmnopqrst",
        "abc",
    };
    
    qsort(lines, sizeof(lines) / sizeof(lines[0]), sizeof(lines[0]), compare);
    for (char **p = lines; p < lines + sizeof(lines) / sizeof(lines[0]); ++p) {
        printf("%s\n", *p);
    }
    return 0;
}
