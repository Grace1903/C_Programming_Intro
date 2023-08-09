
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 7;

    int tmp = a;

    a = b;
    b = tmp;

    /*

    without the use of a temporary variable
    swap can be done with the help of
    binary operators.

    a = a + b;
    b = a - b;
    a = a -b;

    */

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
