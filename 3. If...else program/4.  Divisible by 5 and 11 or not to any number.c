#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num%5==0 && num%11==0)
        printf("Number is divisibled");
    else
        printf("Number is not divisibled");
    return 0;
}

