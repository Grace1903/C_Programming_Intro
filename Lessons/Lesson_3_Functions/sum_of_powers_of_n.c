#include <stdio.h>

int pow1(int a, int b);


int main(int argc, char const *argv[])
{
    int result = 0,i;

    // result = 1^4 + 2^4 + 3^4 + ... + 10^4 
    for(i=1; i <= 10; i++) {
       result = result + pow1(i,4);
    }

    printf("result = %d\n", result);

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

int sum_of_cubes(int a, int b)
{

    return pow1(a, 3) + pow1(b, 3)
}