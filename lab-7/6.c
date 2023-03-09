// WAP to input any two integers, and provide a menu to the user to select any of the options as add, subtract, multiply, divide and display the result accordingly (Switch case)

#include <stdio.h>

void main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter your choice:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("The sum of %d and %d is %d.", a, b, a + b);
        break;
    case 2:
        printf("The difference of %d and %d is %d.", a, b, a - b);
        break;
    case 3:
        printf("The product of %d and %d is %d.", a, b, a * b);
        break;
    case 4:
        printf("The quotient of %d and %d is %d.", a, b, a / b);
        break;
    default:
        printf("Invalid choice.");
        break;
    }
}