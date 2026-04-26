/* symbolic-constants.c - #define NAME REPLACE-TEXT */

#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {

    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d%10.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return EXIT_SUCCESS;
}
