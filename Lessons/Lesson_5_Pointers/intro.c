#include <stdio.h>

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{

    int a = 10;
    int b = 50;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    int xs[] = {1, 2, 3}; // integer array xs contains address of the xs[0]


    int *xp =  xs; //&xs[0];

    for (int i = 0; i < 3; i++, xp++)
    {
        //printf("xs[%d] = %d\n", i, xp[i]);
        //printf("xs[%d] = %d\n", i, *(xp + i));
        //printf("xs[%d] = %d\n", i, *xp);
        //printf("xs[%d] = %d\n", i, *xp);

    }
    
    //xs++; can't be done

    int x = 10; // integer variable x contains the value 10

    int *p;
    p = &x;

    *p = 100;

    (*p)++;
    
    ++*p;

    //printf("p = %p, x = %d\n", p, *p);

    char c = 'z';
    char *q = &c;

    --*q;

    //printf("c = %c\n", *q);


    
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    
    *a = *b;
    *b = tmp;
}