#include <stdio.h>


struct  point
{
    int x;
    int y;
};

struct rectangle
{
    struct point p1;
    struct point p2;
};

struct point makepoint(int x, int y)
{
    struct point point = {x, y};
    return point;
};

struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
};



int main()
{
    struct rectangle screen;
    screen.p1 = makepoint(0, 0);
    screen.p2 = makepoint(10, 10);
    struct point middle = makepoint((screen.p1.x + screen.p2.x) / 2, (screen.p1.y + screen.p2.y) / 2);

    printf("middle point: (%d, %d)\n", middle.x, middle.y);

    return 0;
}
