#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Enter last number: ");
    scanf("%d", &n);
    printf("Natural numbers in reverse from %d to 1: \n", n);
    while(n>=i)
    {
        printf("%d\n", n);
        n=n-1;
    }
    return 0;
}
