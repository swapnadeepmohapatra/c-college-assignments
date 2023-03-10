// Use if else to create KIIT grade system 90-100 is 0 grade, 80-89 is E grade 70 to 79 is 'A' grade, 60 to 69 is 'B' grade 50 to 59 is grade, 40 to 49 is 'D' grade below 40 is grade

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your grade is 0.");
    }
    else if (marks >= 80)
    {
        printf("Your grade is E.");
    }
    else if (marks >= 70)
    {
        printf("Your grade is A.");
    }
    else if (marks >= 60)
    {
        printf("Your grade is B.");
    }
    else if (marks >= 50)
    {
        printf("Your grade is C.");
    }
    else if (marks >= 40)
    {
        printf("Your grade is D.");
    }
    else
    {
        printf("Your grade is E.");
    }

    return 0;
}