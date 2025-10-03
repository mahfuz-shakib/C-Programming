#include<stdio.h>
int isPrime(int n)
{
    int test=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            test =1;
            break;
        }
    }
    if(test==0 && n!=1)
        return 1;
    else
        return 0;
}
int isArmstrong(int n)
{
    int arm=0, temp=n;
    while(n!=0)
    {
        arm = arm + pow((n%10),3);
        n/=10;
    }
    if(temp==arm)
        return 1;
    else
        return 0;
}
int isPerfect(int n)
{
    int i, p=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            p = p + i;
        }
    }
    if(p==n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    scanf("%d", &num);
    if(isPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is not a Not prime\n", num);

    if(isArmstrong(num))
        printf("%d is a armstrong number\n", num);
    else
        printf("%d is not a armstrong number\n", num);

    if(isPerfect(num))
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is not a Perfect number\n", num);
    return 0;
}
