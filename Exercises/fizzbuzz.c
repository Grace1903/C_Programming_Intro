#include <stdio.h>

int main()
{
  int n;

  printf("enter a number");
  scanf("%d", &n);
  
  if(n % 3 == 0 && n % 5 == 0){
    printf("fizzbuzz\n");
  } else if (n % 3 == 0){
    printf("fizz\n");
  } else if (n % 5 == 0){
    printf("buzz\n");
  } else {
    printf("%d\n", n);
  }
  
  return 0;
}
