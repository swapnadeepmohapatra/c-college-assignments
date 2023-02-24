// Convert time to second, minutes and hour.

#include <stdio.h>

int main()
{
    long time, hour, minute, second;

    printf("Enter time in seconds: ");
    scanf("%ld", &time);

    // hour = time / 3600;
    // minute = (time - (hour * 3600)) / 60;
    // second = time - (hour * 3600) - (minute * 60);

    hour = time / 3600;
    time = time % 3600;

    minute = time / 60;
    time = time % 60;

    second = time;

    printf("%ld Hour %ld Minute %ld Second\n", hour, minute, second);

    return 0;
}