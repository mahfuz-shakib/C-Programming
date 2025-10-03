#include<stdio.h>
int main()
{
    int num, first, last, rem  ;
    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;

    while(num!=0)
    {

            rem = num%10;
            num = num/10;
    }
    printf("First digit: %d\n", rem);
    printf("Last digit: %d", last);
}

/*
{
    float num;
    int first, last, value;
    printf("Enter any number: ");
    scanf("%f", &num);

    value = num / 10;
    last = num - value*10;

    while(num>=1)
    {
        num = num/10;
    }
    first = num * 10;
    printf("First digit: %d\n", first);
    printf("Last digit: %d", last);
}
*/
