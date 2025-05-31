#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two Number: ");
    scanf("%d%d", &num1, &num2);

    (num1>num2)
    ? printf("Maximum Number: %d", num1)
    : printf("Maximum Number: %d", num2);
    return 0;
}
