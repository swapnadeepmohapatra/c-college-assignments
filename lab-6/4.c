// Write a program that prints the largest among three numbers.

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;

    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }

    printf("The largest number is %d", max);
}