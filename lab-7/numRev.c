// Reverse a number without using loops.

#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // rev = rev * 10 + num % 10;
    // num /= 10;
    rev = ((num % 10) * 10) + (num / 10);

    printf("The reversed number is %d", rev);

    return 0;
}