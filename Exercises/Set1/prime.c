/**
 * Define a function isprime(n): which takes a
 * positve integer and returns 1 if n is prime
 * otherwise return 0.
 * 
 * If n > 1 is prime it's only divisors are 1 and n
 * 
 * 7 is prime, but 9 is not prime since 9 = 3 * 3
 * 
*/

#include <stdio.h>

int prime(int p);

int main(int argc, char const *argv[])
{
    for (int i = 2; i <= 200; i++)
    {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

int prime(int p)
{
    for(int i = 2; i < p;i++) {
        if( p % i == 0){
            return 0;
        }
     }

     return 1;
}