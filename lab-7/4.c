// Out of two numbers, find out the largest number with conditional operator. Also check if the numbers are equal

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b > a ? b:-1;
    if (max == 1){
    	printf("a=b");
    }
    else{
    	printf("%d",max);
    }
    return 0;
}
