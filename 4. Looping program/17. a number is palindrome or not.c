#include<stdio.h>
int main()
{
    int num, reverse=0, original_num;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &num);
    original_num=num;
    while(num!=0)
    {
        reverse = (reverse*10) + (num%10);
        num = num / 10;
    }

    if(original_num==reverse)
    {
        printf("%d is a palindrome number.", original_num);
    }
    else
    {
        printf("%d is not a palindrome number.", original_num);
    }
    return 0;
}
