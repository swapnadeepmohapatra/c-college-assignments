#include <stdio.h>

void main()
{
    int x = ((1 == 2) != 3);
    int y = (1 > 2 + 3 && 4);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
}