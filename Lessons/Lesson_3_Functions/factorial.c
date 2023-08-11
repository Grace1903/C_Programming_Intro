
#include <stdio.h>

int fact(int n);

int main(int argc, char const *argv[])
{
    int n = 5;

    printf("%d! = %d\n", n, fact(n));

    return 0;
}

int fact(int n)
{ 
    if(n<0){
        return 0;
    }
    
    if(n<=1){
        return 1;

    }

    return n * fact(n-1);
}

int fact1(int n)
{
    int i,fact=1;

    for(i=1;i<= n;i++){
        fact = fact * i;
    }
    return fact;

}
