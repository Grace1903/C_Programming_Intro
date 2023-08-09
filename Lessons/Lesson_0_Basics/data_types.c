
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    float c, d, e;

    int x = 2, y = 9;
    float g, h, z;

    a = 2 / 9 * 9;
    b = 2 * 9 / 9;

    c = 2 / 9 * 9;
    d = 2 * 9 / 9;
    e = 2 / 9.0 * 9;

    printf("a = %d, b = %d\n", a, b);
    printf("c = %f, d = %f, e = %f\n", c, d, e);

    g = x / y * y;
    h = x * y / y;
    z = x / (float)y * y;

    printf("g = %f, h = %f, z = %f\n", g, h, z);

    return 0;
}
