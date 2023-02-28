// Find out an entered alphabet is vowel or consonant

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The entered alphabet is a vowel.");
    }
    else
    {
        printf("The entered alphabet is a consonant.");
    }
}