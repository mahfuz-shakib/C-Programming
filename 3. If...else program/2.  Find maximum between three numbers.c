#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three number: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1>num2)
        {
            if(num1>num3)
                printf("Maximum number: %d", num1);
            else
                printf("Maximum number: %d", num3);
        }
    else if(num2>num3)
        printf("Maximum number: %d", num2);
    else
        printf("Maximum number: %d", num3);
    return 0;
}

