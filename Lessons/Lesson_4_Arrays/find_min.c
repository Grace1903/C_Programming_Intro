/**
 * Find minum of elements in an array
 * 
 */

#include <stdio.h>

#define SIZE 10

int array_min(int xs[], int size);

int main(int argc, char const *argv[])
{
    int a[SIZE] = {1, 7, 3, -3, 5};
    int b[50] = {1, 7, 3, -3, 5, 5, 5, 5, -5, 5, 5,5};

    printf("minimim  of a = %d\n", array_min(a, 5));
    printf("minimim  of b = %d\n", array_min(b, 12));

    return 0;
}

int array_min(int xs[], int size)
{
    int i, m;

    m = 0;
    
    for( i=0;i<size;i++){
        if(m > xs[i]){
            m = xs[i]; 
        }
    }
    
    return m;
}

int array_min1(int a,int b)
{
int c = 0;
if(a>b) {
    c = b ;
}
else {
    c=a;
}
return c;
}


int array_min_improved(int a, int b)
{
    // if (a < b) {
    //     return a;
    // } else {
    //     return b;
    // }
    // ternary operator
    return a < b ? a : b;
}

