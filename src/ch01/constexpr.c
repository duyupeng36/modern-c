/* constexpr.c -- constexpr int name = value */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {
    int constexpr LOWER = 0;
    int constexpr UPPER = 300;
    int constexpr STEP = 20;

    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d%10.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return EXIT_SUCCESS;
}