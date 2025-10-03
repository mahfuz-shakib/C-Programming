#include<stdio.h>
int main()
{
    int num, first, last, digit = 0, result, temp, value;

    printf("Enter any number: ");
    scanf("%d", &num);

    digit = log10(num);
    first=num;

    while(first>=10)
    {
        first = first / 10;
    }
     //first = first + 0;
    last = num % 10;

    temp = last * pow(10, digit);
    value = first * pow(10, digit);
    value = num % value;

    result = temp + value;
    result = result-last;
    result = result+first;

printf("swapping value: %d", result);
}
