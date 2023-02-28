// Write a porgram to show the flow of comma operator var1 = (n++,n)

#include <stdio.h>

void main()
{
    int n = 10;
    int var1 = (n++, n);
    printf("n = %d\n", n);
    printf("var1 = %d\n", var1);
}