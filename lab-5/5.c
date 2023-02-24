// WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 100.

#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float avg, per;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    per = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;

    printf("Percentage: %f %%", per);
}