/**
 * Read 'n' numbers from from input. Then print the sum of
 * those numbers.
 *
 */
#include <stdio.h>

int main()
{
    int n, i, x, sum = 0;

    printf("enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the value #%d: ", i + 1);
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            sum = sum + x;
        }
    }

    printf("\nsum = %d\n", sum);

    return 0;
}