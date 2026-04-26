/* hello.c - 向终端输出 hello, world */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char *argv[argc + 1]) {
    printf("hello, world!\n");
    return EXIT_SUCCESS;
}
