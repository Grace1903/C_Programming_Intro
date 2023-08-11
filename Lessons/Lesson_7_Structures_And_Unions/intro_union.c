#include <stdio.h>

union u {
    char name[20];
    int n;
};

union u u2;

int main(int argc, char const *argv[])
{
    union u u1;
    
    printf("size of u1 = %ld\n", sizeof(u1));
    
    return 0;
}
