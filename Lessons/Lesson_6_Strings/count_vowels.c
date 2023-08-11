#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_vowels(char *s);
int isvowel(char c);
int count_alphas(char *s);

int main(int argc, char const *argv[])
{
    char sentence[] = "Quick brown fox jumps over a lazy dog.";

    int num_vowels = count_vowels(sentence);
      
    int num_alpha = count_alphas(sentence);

    int num_consonants = num_alpha - num_vowels;

    printf("vowels = %d, consonants = %d\n", num_vowels, num_consonants);

    return 0;
}

int count_alphas(char *s)
{
    int count = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i])) {
            count++;
        }
    }

    return count;
}

int count_vowels(char *s)
{
    int count = 0;

    for (int  i = 0; i < strlen(s); i++)
    {
        if (isvowel(s[i])) {
            count++;
        }
    }

    return count;
}

int isvowel(char c)
{
    char *vowels = "aeiou";
    int n = strlen(vowels);

    for (int i = 0; i < n; i++) {
        if (c == vowels[i]){
            return 1;
        }
    }

    return 0;
}