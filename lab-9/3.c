// Find sum of the digits using "FOR" loop.

#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    printf("Sum of digits: %d", sum);
}