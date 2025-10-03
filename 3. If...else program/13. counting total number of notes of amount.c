#include<stdio.h>
int main()
{ // n=amount & a=note of taka
    int n, a;
    printf("enter any amount: ");
    scanf("%d", &n);
    a=n/500;
    printf("500 : %d\n", a);
    n=n%500;
    a=n/100;
    printf("100 : %d\n", a);
    n=n%100;
    a=n/50;
    printf("50 : %d\n", a);
    n=n%50;
    a=n/20;
    printf("20 : %d\n", a);
    n=n%20;
    a=n/10;
    printf("10 : %d\n", a);
    n=n%10;
    a=n/5;
    printf("5 : %d\n", a);
    n=n%5;
    a=n/2;
    printf("2 : %d\n", a);
    n=n%2;
    printf("1 : %d\n", a);
    return 0;
}
