//write a program to find out leap year by using conditional operator

#include<stdio.h>

int main()

{
    int year;
    printf("Enter any year: ");
    scanf("%d", &year);

    (year%400==0) || (year%4==0 && year%100!=0)
    ? printf("This is leap year")
    : printf("This is not leap year");

   return 0;
}
