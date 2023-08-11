#include <stdio.h>
#include <string.h>
#include <ctype.h>

int mstrlen(char *s);

int main(int argc, char const *argv[])
{
    char s1[] = "Hello";

    char s2[] = " world!";



    char tmp[20] = "";

    strcat(tmp, s1);
    strcat(tmp, s2);
    
    printf("%s\n", tmp);

    //printf("length = %d", mstrlen(s1));
    //strcpy(tmp, s1);

    // if (islower(s2[1])) {
    //     s2[1] = toupper(s2[1]);
    // }

    // printf("%s\n", s2);

    // printf("%s\n", )

    //char *msg = "hello world!";

    //printf("length of s = %ld\n", strlen(s));

    //printf("%s\n", s);
    //printf("%s\n", msg);

    //s[0] = 'H';
    //msg[6] = 'H';

    // printf("%s\n", s);
    // printf("%s\n", msg);
    // printf("%d\n", msg[12]);

    return 0;
}

int mstrlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++){
    }

    return i;
}
