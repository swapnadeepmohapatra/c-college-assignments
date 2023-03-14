// WAP to check if a number is prime or not.

#include <stdio.h>

int main()
{

    int n;
    int c = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c > 0)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }

    return 0;
}