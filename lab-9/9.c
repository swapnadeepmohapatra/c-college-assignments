// Find out if a number is perfect or not.

#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("Perfect number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
}