
#include <stdio.h>

int COUNT = 100;

static int static_global = 10;

void foo(void)
{
    COUNT++;

    static_global++;

    printf("static_global = %d\n", static_global);
    
    printf("foo\n");
}

void bar(void)
{
    COUNT++;

    printf("bar\n");
}