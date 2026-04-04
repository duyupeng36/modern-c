/**
 * ex08_01.c - 结构体变量
**/

#include <stdio.h>
#include <math.h>

struct  point
{
    int x;
    int y;
};

struct rectangle
{
    struct point top_left;
    struct point bottom_right;
};

int main(void)
{
    struct point p1 = {0, 0};
    struct point p2 = {.y=10, .x=20};

    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    double distance = sqrtl(powl(p2.x - p1.x, 2) + powl(p2.y - p1.y, 2));
    printf("Distance: %.2f\n", distance);

    struct rectangle rect = {{.x=0, .y=0}, {.y=20, .x=10}};
    printf("Rectangle top-left: (%d, %d)\n", rect.top_left.x, rect.top_left.y);
    printf("Rectangle bottom-right: (%d, %d)\n", rect.bottom_right.x, rect.bottom_right.y);

    printf("Rectangle width: %d\n", rect.bottom_right.x - rect.top_left.x);
    printf("Rectangle height: %d\n", rect.bottom_right.y - rect.top_left.y);

    return 0;
}