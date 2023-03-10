// WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.

#include <stdio.h>

int main()
{
    float a, b, c, dis, root1, root2, rP, iP;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    dis = b * b - 4 * a * c;

    // condition for real and different roots
    if (dis > 0)
    {
        // sqrt() function returns square root
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }

    // condition for real and equal roots
    else if (dis == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f;", root1);
    }

    // if roots are not real
    else
    {
        rP = -b / (2 * a);
        iP = sqrt(-dis) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", rP, iP, rP, iP);
    }

    return 0;
}
