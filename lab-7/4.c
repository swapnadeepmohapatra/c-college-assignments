// Out of two numbers, find out the largest number with conditional operator. Also check if the numbers are equal

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    printf("The largest number is %d", max);

    return 0;
}