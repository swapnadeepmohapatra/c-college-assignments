// Reverse a four digit number using arithmetic operators wihout using loop

#include <stdio.h>

void main()
{
    int num, rev = 0;
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    rev = rev + num % 10;
    num = num / 10;
    rev = rev * 10 + num % 10;
    num = num / 10;
    rev = rev * 10 + num % 10;
    num = num / 10;
    rev = rev * 10 + num % 10;
    printf("The reverse of the number is %d.", rev);
}