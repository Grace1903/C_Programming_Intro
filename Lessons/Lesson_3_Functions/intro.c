
#include <stdio.h>

void square(int i, char c) {

    printf("c = %d\n", c);

    printf("%d => %d\n", i, i * i);
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
        square(i, '1');
    
    return 0;
}
