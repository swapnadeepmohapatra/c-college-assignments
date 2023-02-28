// WAP to print the sizes of char, int, float, double, your name using sizeof operator

#include <stdio.h>

void main()
{
    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of float: %ld\n", sizeof(float));
    printf("Size of double: %ld\n", sizeof(double));
    printf("Size of your name: %ld\n", sizeof("Swapnadeep Mohapatra"));
}