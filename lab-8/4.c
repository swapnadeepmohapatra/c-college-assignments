// Print all even numbers between 235 and 280

#include <stdio.h>

void main()
{
    int i = 235;
    while (i <= 280)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
