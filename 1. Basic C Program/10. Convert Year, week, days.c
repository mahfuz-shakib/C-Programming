#include<stdio.h>
int main()
{
    int days, Year, Week, Days;
    printf("Enter days: ");
    scanf("%d", &days);

    /* 1 year = 365 days */
    Year = (days/365);
    printf("%d days = %d Years", days, Year);

    /* 1 week = 7 days */
    Week = ((days-(Year*365))/7);
    printf("  %d Weeks", Week);

    Days = ((days-(Year*365))-(Week*7));
    printf("  %d Days", Days);
    return 0;
}
