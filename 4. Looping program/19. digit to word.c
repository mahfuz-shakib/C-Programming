#include<stdio.h>
int main()
{
    int n, rev=0, temp;

    scanf("%d", &n);
    temp=n;

    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    n=rev;
    while(n!=0)
    {
        switch(n%10)
        {

        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            printf("Zero ");
        }
        n/=10;
    }
    while(temp%10==0)
    {
        printf("Zero ");
        temp/=10;
    }
    return 0;
}
