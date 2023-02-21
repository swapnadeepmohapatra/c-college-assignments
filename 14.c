// A promoter is creating a residential complex with a triangular children park, rectangular building plot and a circular swimming pool. Take necessary inputs and calculate the total value of the area.

#include <stdio.h>

void main()
{
    int plot_length, plot_width, plot_area;
    printf("Enter the length and width of the rectangular building plot: ");
    scanf("%d %d", &plot_length, &plot_width);
    plot_area = plot_length * plot_width;
    printf("Area = %d\n", plot_area);

    float r, pool_area;
    printf("Enter the radius of the circular swimming pool: ");
    scanf("%f", &r);
    pool_area = 3.14 * r * r;
    printf("Area = %f\n", pool_area);

    int park_base, park_height, park_area;
    printf("Enter the base and height of the triangle: ");
    scanf("%d %d", &park_base, &park_height);
    park_area = 0.5 * park_base * park_height;
    printf("Area = %d\n", park_area);
}