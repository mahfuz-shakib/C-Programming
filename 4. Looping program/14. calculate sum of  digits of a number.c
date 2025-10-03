#include<stdio.h>
int main()
{
    int num, last, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        last = num % 10;
        sum = sum + last;
        num = num/10;
    }
    printf("Sum of first and last digit of a number: %d", sum);
}
