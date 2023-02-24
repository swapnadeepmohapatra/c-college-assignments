// A promoter is creating a residential complex with a triangular children park, rectangular building plot and a circular swimming pool. Take necessary inputs and calculate the total value of the area.

#include <stdio.h>

void main()
{
    float plot_length, plot_width, plot_area, pool_radius, pool_area, park_base, park_height, park_area, total_area;

    printf("Enter the length and width of the rectangular building plot: ");
    scanf("%f %f", &plot_length, &plot_width);
    plot_area = plot_length * plot_width;

    printf("Enter the radius of the circular swimming pool: ");
    scanf("%f", &pool_radius);
    pool_area = 3.14 * pool_radius * pool_radius;

    float park_base, park_height, park_area;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &park_base, &park_height);
    park_area = 0.5 * park_base * park_height;

    total_area = plot_area + pool_area + park_area;

    printf("Total Area = %f\n", total_area);
}