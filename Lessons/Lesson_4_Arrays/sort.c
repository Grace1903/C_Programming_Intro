#include <stdio.h>

#define SIZE 10

int sort(int xs[], int size);
void print_array(int xs[], int size);

int main(int argc, char const *argv[])
{
    int xs[SIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    sort(xs, SIZE);
    
    return 0;
}

int sort(int xs[], int size)
{
    for (int i = 0; i < size; i++) {
        print_array(xs, size);

        for (int j = size - 1; j > i; j--) {
            if (xs[j] < xs[j-1]) {
                int tmp = xs[j];
                xs[j] = xs[j-1];
                xs[j-1] = tmp;
            }
        }
    }
    
    return 0;
}

void print_array(int xs[], int size)
{
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", xs[i]);
    }

    putchar('\n');
}