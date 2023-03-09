// using switch case statements write down KIIT grade system 90-100 is 0 grade, 80-89 is E grade 70 to 79 is 'A' grade, 60 to 69 is 'B' grade 50 to 59 is grade, 40 to 49 is 'D' grade below 40 is grade E.

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Your grade is 0.");
        break;
    case 8:
        printf("Your grade is E.");
        break;
    case 7:
        printf("Your grade is A.");
        break;
    case 6:
        printf("Your grade is B.");
        break;
    case 5:
        printf("Your grade is C.");
        break;
    case 4:
        printf("Your grade is D.");
        break;
    default:
        printf("Your grade is E.");
        break;
    }

    return 0;
}