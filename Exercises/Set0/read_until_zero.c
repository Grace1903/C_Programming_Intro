/**
 * Read all numbers until a zero is entered.
 *  Print all the numbers except zero.
*/

#include <stdio.h>

int main ()
{
    int num;

    do {
        
        printf("Enter the number : ");
        scanf("%d", &num);

        printf("The number entered = %d\n", num);
        
    } while (num != 0);

    return 0;

}