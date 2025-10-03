//write a program to calculate product or multiplication of digits of a number
#include<stdio.h>
int main()
{
    int num, last, product=1;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        last = num % 10;
        product = product * last;
        num = num / 10;
    }
    printf("Product of digits of a number: %d", product);
}
