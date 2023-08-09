/**
 *  print the fizzbizz values of numbers from 1 to 20
 * 
*/

#include <stdio.h>

void fizzbuzz(int n); // function declaration

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 20; i++)
    fizzbuzz(i); // function call

    return 0;
}

// function definition starts here
void fizzbuzz(int n)
{
    if(n % 3 == 0 && n % 5 == 0) {
    printf("fizzbuzz\n");
  } else if (n % 3 == 0) {
    printf("fizz\n");
  } else if (n % 5 == 0) {
    printf("buzz\n");
  } else {
    printf("%d\n", n);
  }

    return;
}
// function definition ends here
