// WAP to convert given paisa into its equivalent rupee and paisa as per the following format.

#include <stdio.h>

void main()
{
    int paisa;

    printf("Enter paisa: ");
    scanf("%d", &paisa);

    int rupee = paisa / 100;
    int paisa2 = paisa % 100;

    printf("%d paisa = Rs. %d and %d paisa", paisa, rupee, paisa2);
}
