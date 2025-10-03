#include<stdio.h>

int main()

{
	int y=2024;
	char ch[10]={'A', 'B', 'C', 'D'};
    //input section
    printf("Enter any year: ");
	scanf("%d", &y);

    if(y%400==0)
    {
        printf("This is leap year");
    }
    else if(y%100!=0 & y%4==0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
	return 0;
}

