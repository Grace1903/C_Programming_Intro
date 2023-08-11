#include <stdio.h>

#define SIZE 10

void test(int as[], int size);
void test1(int x);

int main(int argc, char const *argv[])
{
    int xs[SIZE] = {5, 7, 8, 9, 1, 3, 4, 2, 6, 10};
    int a = 1;

    test1(a);
    test(xs, SIZE);

    printf("a = %d\n", a);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", xs[i]);
    }

    putchar('\n');
    

    return 0;
}

void test(int as[], int size)
{
    for (int i = 0; i < size; i++) {
        as[i] = 100;
    }

}

void test1(int x)
{

    x = 100;
}