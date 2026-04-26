/* fahr2cels_reverse.c - 计算华氏温度和摄氏温度对照表 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {

    for (int fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d%10.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return EXIT_SUCCESS;
}