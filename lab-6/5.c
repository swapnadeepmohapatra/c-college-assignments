// Write a program that prints the smallest among four numbers with one-way decision.

#include <stdio.h>

void main()
{
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int min = a;

    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    if (min > d)
    {
        min = d;
    }

    printf("The smallest number is %d", min);
}