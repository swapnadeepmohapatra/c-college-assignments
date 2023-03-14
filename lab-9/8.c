// Find out factorial of a number using "FOR" loop.

#include <stdio.h>

void main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial: %d", fact);
}