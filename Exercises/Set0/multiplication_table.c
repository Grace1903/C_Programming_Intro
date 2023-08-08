/**
 * Read an integer 'num' from input and then generate the
 * multiplication table for num as
 * 
 *  1 * num = ---
 *  2 * num = ---
 *  -------------
 *  10 * num = --
 * 
*/
#include <stdio.h>

int main()
{
    int num=5,i;

    for(i=1;i<11;i++){
    printf("%d * %d = %d\n",num,i,num*i);
    }


    return 0;
}