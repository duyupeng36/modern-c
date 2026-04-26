/* fahr2cels.c - 计算华氏温度和摄氏温度对照表 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {

    int lower = 0; // 华氏温度下限
    int upper = 300;// 华氏温度上限
    int step = 20;// 步长

    int fahr = lower;
    while(fahr <= upper) {
        int cels = 5 * (fahr - 32) / 9;
        printf("%3d%6d\n", fahr, cels);
        fahr = fahr + step;
    }
    return EXIT_SUCCESS;
}
