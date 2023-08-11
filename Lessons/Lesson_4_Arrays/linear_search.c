
#include <stdio.h>

#define SIZE 10

int search(int xs[], int size, int key);

int main(int argc, char const *argv[])
{
    int n,i,key;

    printf("enter the limit of the array :");
    scanf("%d",&n);

    int a[n];

    printf("enter the elements :\n");
    for(i=0; i<n; i++){

    scanf("%d",&a[i]);
    }


    printf("enter the key :");
    scanf("%d",&key);


    int pos;

    
    pos = search(a, n, key);

    printf("position of %d in a[] is %d\n", key, pos);


    return 0;
}

int search(int xs[], int size, int key)
{
    int i;
    for(i=0;i<size;i++){
        if(key == xs[i]){
            return i;
        }
    }

    return -1;
}

