// Reverse a four digit number using arithmetic operators wihout using loop

#include <stdio.h>

void main()
{
    int num, rev = 0;
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    rev = rev + num % 100;
    num = num / 100;
    rev = rev * 100 + num % 100;
    printf("The reverse of the number is %d.", rev);
}