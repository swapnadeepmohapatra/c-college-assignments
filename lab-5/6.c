// WAP to add two times in hour, minitue & second format entered through the keyboard in the format hh:mm:ss

#include <stdio.h>

void main()
{
    int hour1, hour2, minute1, minute2, second1, second2, hour, minute, second;

    printf("Enter first time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &hour1, &minute1, &second1);

    printf("Enter second time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &hour2, &minute2, &second2);

    second = second1 + second2;
    minute = minute1 + minute2 + second / 60;
    hour = hour1 + hour2 + minute / 60;
    minute = minute % 60;
    second = second % 60;

    printf("Sum of time is %d:%d:%d", hour, minute, second);
}