#include<stdio.h>
int main()
{
   int num, reverse=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num!=0)
        {
            reverse = (reverse * 10) + (num % 10);
            num = num / 10;
        }
        printf("Reverse of this number: %d", reverse);

    return 0;
}


/*

     int num, digit, temp, last, reverse=0;

    printf("Enter any number: ");
    scanf("%d", &num);
    while(num>0)
    {
        digit = log10(num);
        last = num % 10;
        temp = last * pow(10,digit);
        reverse = reverse + temp;
        num = num / 10;
    }
    printf("Reverse of this number: %d", reverse);

    return 0;
*/
