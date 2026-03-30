#include <stdio.h>

typedef struct {
    unsigned long long int m[2][2];
} Matrix;

Matrix multiply(Matrix a, Matrix b) {
    Matrix r;
    r.m[0][0] = a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0];
    r.m[0][1] = a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1];
    r.m[1][0] = a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0];
    r.m[1][1] = a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1];
    return r;
}

Matrix matrixPower(Matrix mat, int power) {
    Matrix result = {{{1, 0}, {0, 1}}};
    while (power > 0) {
        if (power % 2 == 1)
            result = multiply(result, mat);
        mat = multiply(mat, mat);
        power /= 2;
    }
    return result;
}

unsigned long long fib(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    Matrix base = {{{1, 1}, {1, 0}}};
    Matrix power = matrixPower(base, n - 1);
    return power.m[0][0];
}

int main(void) {
    for (int i = 0; i <= 10; i++)
        printf("fib(%d) = %lld\n", i, fib(i));

    printf("fib(50) = %lld\n", fib(50));
    printf("fib(90) = %lld\n", fib(90));
    return 0;
}