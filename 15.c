// Find the centigrade temp for a given Fahrenheit temp

#include <stdio.h>

void main()
{
    float f, c;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Centigrade = %f", c);
}