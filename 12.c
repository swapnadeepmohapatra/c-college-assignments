// WAP to calculate area and the perimeter of a circle.

#include <stdio.h>

void main()
{
    float r, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);
}