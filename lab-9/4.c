// Reverse a number using "FOR" loop.

#include <stdio.h>

void main()
{
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i /= 10)
    {
        rev = rev * 10 + i % 10;
    }
    printf("Reverse: %d", rev);
}