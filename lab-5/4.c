// WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer and meter as per the following format.

#include <stdio.h>

void main()
{
    int meter, kilometer;

    printf("Enter meter: ");
    scanf("%d", &meter);

    kilometer = meter / 1000;
    meter = meter % 1000;

    printf("%d kilometer and %d meter", kilometer, meter);
}