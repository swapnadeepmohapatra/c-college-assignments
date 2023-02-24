//  Write programs : Input 2 integer values and display the addition(+), subtraction(-), multiplication(\*) division(/) and modular division(%)

#include <stdio.h>

void main()
{
    int a, b, sum, sub, mul, div, mod;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("Sum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Mul = %d\n", mul);
    printf("Div = %d\n", div);
    printf("Mod = %d\n", mod);
}
