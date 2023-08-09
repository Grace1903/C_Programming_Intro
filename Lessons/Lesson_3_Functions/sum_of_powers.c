#include <stdio.h>

int pow1(int a, int b);

int main(int argc, char const *argv[])
{
    int i, j, x;

    for(i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            x = pow1(i, 5) + pow1(j, 5);
            printf("%d^5 + %d^5 = %d\n", i, j, x);
        }   
    }
    return 0;
}

int pow1(int a, int b)
{
    int p = 1;

    for (int i = 0; i < b; i++) {
        p = p * a;
    }

    return p;
}
