#include<stdio.h>
int main()
{
    float num1, num2;
    char op;

    printf("[num1] [+ - * / %%] [num2] :");
    scanf("%f %%c %f", &num1, &op, &num2);

    switch(op)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f", num1, op, num2, num1+num2);
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f", num1, op, num2, num1-num2);
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f", num1, op, num2, num1*num2);
        break;
    case '/':
        printf("%.2f %c %.2f = %.2f", num1, op, num2, num1/num2);
        break;
    case '%%':
        printf("%.2f %%c %.2f = %.2f", num1, op, num2, num1/num2);
        break;
    }
    return 0;
}

