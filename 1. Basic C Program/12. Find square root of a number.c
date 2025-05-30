#include<stdio.h>
int main()
{
    double num, result;
    printf("Enter any number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("Square root of %.2lf = %.2lf", num, result);
    return 0;
}
