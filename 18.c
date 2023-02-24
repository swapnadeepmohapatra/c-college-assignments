// Add two integers without using + and print the result.

#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;
    int sum = a - -b;
    printf("Sum of %d and %d is %d", a, b, sum);
}