#include<stdio.h>
int isEven(int x);
int isEven(int x)
{
    if(x%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if(isEven(n))
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
