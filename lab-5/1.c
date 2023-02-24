// Use type casting in a program and execute division operation.

#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    float c = (float)a / b;

    printf("%f", c);
}
