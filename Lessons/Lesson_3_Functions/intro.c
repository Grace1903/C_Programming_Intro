
#include <stdio.h>

int pow1(int a, int b);
void pow2(int a, int b);

int main(int argc, char const *argv[])
{
    int result;

   //  result =  2 ^ 5 + 3 ^ 7
   result = pow1(2, 5) + pow1(3, 7);
   
   printf("result: %d\n", result);

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

void pow2(int a, int b)
{
    int p = 1;

    for (int i = 0; i < b; i++) {
        p = p * a;
    }

    printf("%d ^ %d = %d\n", a, b, p);

    return;
}
