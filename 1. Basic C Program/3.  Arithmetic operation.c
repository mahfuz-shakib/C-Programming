#include<stdio.h>
int main()
{
    int x, y, a, b, c, d, e;

    printf("First number: ");
    scanf("%d", &x);
    printf("Second number: ");
    scanf("%d", &y);

    a=x+y;
    printf("Sum = %d\n", a);

    b=x-y;
    printf("Substraction = %d\n", b);

    c=x*y;
    printf("Multi[lication = %d\n", c);

    d=x/y;
    printf("Division = %d\n", d);

    e=x%y;
    printf("Modulas = %d\n", e);

    return 0;
}

