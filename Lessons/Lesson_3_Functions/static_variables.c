
#include <stdio.h>

int foo(void);

int main(int argc, char const *argv[])
{
    register int c = 100;

    printf("c = %d\n", c);
    
    for (int i = 0; i < 5; i++) {

        printf("%d ", foo());
    }

    putchar('\n');

    return 0;
}

int foo(void)
{

    static int n = 0;

    n += 1;

    return n;
}
