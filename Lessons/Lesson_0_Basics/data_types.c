
#include <stdio.h>

int main(int argc, char const *argv[])
{

    // unsigned char c1 = 'a';
    // unsigned char c2 = -1;

    // printf("c1 = %d, c2 = %d\n", c1, c2);
    // char c; // char takes 1 byte

    // int a; // int takes 4 bytes

    // short int sa; // short int takes 2 bytes

    // long int la; // long takes 8 bytes

    // float f; // float takes 4 bytes

    // double d; // double takes 8 bytes

    // char s[] = "Hello world!"; // s takes 13 characters

    // printf("take %lu bytes\n", sizeof(s));

    // int a = 017;

    // printf("%d\n", a);

    // int a, b;
    // float c, d, e;

    int x = 2, y = 9;
    float g, h, z;

    // a = 2 / 9 * 9;
    // b = 2 * 9 / 9;

    // c = 2 / 9 * 9;
    // d = 2 * 9 / 9;
    // e = 2 / 9.0 * 9;

    // printf("a = %d, b = %d\n", a, b);
    // printf("c = %f, d = %f, e = %f\n", c, d, e);

    g = x / y * y;
    h = x * y / y;
    z = x / (float)y * y;

    printf("g = %f, h = %f, z = %f\n", g, h, z);

    return 0;
}
