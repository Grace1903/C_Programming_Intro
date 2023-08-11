#include <stdio.h>

void foo(void);
void bar(void);

extern int COUNT;

extern int static_global;

int main(int argc, char const *argv[])
{
    COUNT *= 5;

    foo();
    bar();

    printf("COUNT = %d\n", COUNT);

    printf("static_global = %d", static_global);

    return 0;
}
