// Calculate the area of a rectangle (take two values as input = length, Width).

#include <stdio.h>

void main()
{
    int length, width, area;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    printf("Area = %d\n", area);
}