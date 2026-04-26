/* fahr2cels.c - 计算华氏温度和摄氏温度对照表 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {

    double lower = 0.; // 华氏温度下限
    double upper = 300.;// 华氏温度上限
    double step = 20.;// 步长

    double fahr = lower;
    while(fahr <= upper) {
        double cels = 5 * (fahr - 32) / 9;
        printf("%6.2f%10.2f\n", fahr, cels);
        fahr = fahr + step;
    }
    return EXIT_SUCCESS;
}
