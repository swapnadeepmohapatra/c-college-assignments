#include <stdio.h>

int main()

{

    int a = 1;
    char c;
    float f;

    c = (char)a;
    f = (float)a;

    printf("%d\n", a);
    printf("%c\n", c);
    printf("%f\n", f);

    printf("Hello there: \U00002103\n");

    return 0;
}