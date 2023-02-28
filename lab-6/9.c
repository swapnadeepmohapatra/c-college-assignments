// WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message.

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The alphabet in uppercase is %c.", ch - 32);
    }
    else
    {
        printf("The entered character is not an alphabet.");
    }
}