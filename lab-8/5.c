// Print all the multiples of 7 between 250 to 400.

#include <stdio.h>

int main()
{
    int i = 250;
    while (i <= 400)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}