// Print a number in words.

#include <stdio.h>

void main()
{
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    int num;

    while (rev > 0)
    {
        num = rev % 10;
        switch (num)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        rev /= 10;
    }
}