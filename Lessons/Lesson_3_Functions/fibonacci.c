#include <stdio.h>

int fib(int n);

int main(int argc, char const *argv[])
{
    int n = 10;
    int f = fib(n);

    printf("fib(%d) = %d\n", n, f);

    return 0;
}

int fib(int n)
{
    int f1, f2;

    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        
        f1 = fib(n-1);
        f2 = fib(n-2);

        return f1 + f2;
    }
}

int fib1(int n)
{
    if (n < 2) {
        return n;
    }
    
    return fib(n-1) + fib(n-2);

}
