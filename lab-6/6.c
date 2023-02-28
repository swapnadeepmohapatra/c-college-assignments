// WAP to determine a number given by the user is zero, positive, or negative.

#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("The number is zero.");
    }
    else if (num > 0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }
}