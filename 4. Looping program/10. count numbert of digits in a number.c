#include<stdio.h>
int main()
{
    long long num, rev;
    int digit=0;

    printf("Enter any number: ");
    scanf("%lld", &num);

    while(num!=0)
    {
       rev = num % 10;
        digit = digit + 1;
        num = num / 10;

    }
    printf("Digit: %d", digit);
}
