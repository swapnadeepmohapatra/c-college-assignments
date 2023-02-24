// WAP to convert given second into its equivalent hour, minute and second as per the following

#include <stdio.h>

void main()
{
    long time, hour, minute, second;

    printf("Enter time in seconds: ");
    scanf("%ld", &time);

    hour = time / 3600;
    time = time % 3600;

    minute = time / 60;
    time = time % 60;

    second = time;

    printf("HH:MM:SS - %ld:%ld:%ld\n", hour, minute, second);
}