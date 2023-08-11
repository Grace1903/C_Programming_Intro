
// run gcc intro_struct.c -lm to compile
#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
    int z;
};

void print_point(struct Point p);
struct Point shifted_point(struct Point p, int dx, int dy);
double distance(struct Point p, struct Point q);

int main(int argc, char const *argv[])
{

    struct Point p1, p2;

    printf("size of p1 = %ld\n", sizeof(p1));

    // p1.x = 0;
    // p1.y = 0;

    // p2 = (struct Point){7, 8};

    // struct Point p3 = shifted_point(p1, 1, 1);

    // printf("distance between p2, p3 = %f\n", distance(p2, p3));

    return 0;
}

double distance(struct Point p, struct Point q)
{
    int d = pow(p.x - q.x, 2) + pow(p.y - q.y, 2);

    return sqrt(d);

}

void print_point(struct Point p)
{

    printf("(%d, %d)\n", p.x, p.y);
}

struct Point shifted_point(struct Point p, int dx, int dy)
{
    struct Point q;

    q.x = p.x + dx;
    q.y = p.y + dy;

    return q;
}