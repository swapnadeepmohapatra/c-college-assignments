// Print multiple of 13 between a given range using for loop.

#include <stdio.h>

void main()
{
    int i, start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++)
    {
        if (i % 13 == 0)
        {
            printf("%d\n", i);
        }
    }
}
