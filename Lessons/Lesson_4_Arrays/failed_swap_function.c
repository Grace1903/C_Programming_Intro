#include <stdio.h>

void swap(int a, int b);

int a = 10;
int b = 20;

int main(int argc, char const *argv[])
{
    printf("a = %d, b = %d\n", a, b);
    
    swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int a, int b)
{    
    int c;
    
    c =a ;
    a= b;
    b=c;
}
