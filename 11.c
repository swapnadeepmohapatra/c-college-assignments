// Write programs : Input 2 float values and display the addition(+), subtraction(-), multiplication(\*) division(/) and modular division(%)

#include <stdio.h>

void main()
{
    float a, b, sum, sub, mul, div;
    int mod;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = (int)a % (int)b;
    // mod = a % b;

    printf("Sum = %f\n", sum);
    printf("Sub = %f\n", sub);
    printf("Mul = %f\n", mul);
    printf("Div = %f\n", div);
    printf("Mod = %f\n", mod);
}
