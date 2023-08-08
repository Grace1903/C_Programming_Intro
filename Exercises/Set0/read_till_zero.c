/**
 * Read all numbers until a zero is read from input.
 * Then print the sum of all even numbers entered.
*/
#include <stdio.h>

int main()
{
    int num,sum=0;

    printf("enter the values");

    do {
         scanf("%d",&num);
        
        sum = sum +num;

    } while (num != 0);

    printf("sum = %d\n", sum);
 
    return 0;
}
