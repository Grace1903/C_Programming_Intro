
#include <stdio.h>

#define SIZE 10

int main(int argc, char const *argv[])
{
    int nums[SIZE] = {3, 6, 4, 7, 8, 9};
    int squares[SIZE];
    int i;


    for (i = 0; i < SIZE; i++) {
        squares[i] = nums[i] * nums[i];
    }

    printf("squares are:\n");
    for(i=0;i<SIZE;i++) {
        printf("%d\n",squares[i]);
    }

    return 0;
}

