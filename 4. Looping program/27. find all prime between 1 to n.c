//find prime number
#include<stdio.h>
int main()
{
    int i, j, n, c;
    printf("Enter last value: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 to %d : ",n);

    for(j=1; j<=n; j++)
    {
            c=1;

        for(i=2; i<=j/2; i++)
        {
            if(j%i==0)
            {
                c=0;
                break;
            }
        }
        if(c==1 && j>1)
            printf("%d ",j);
    }

    return 0;
}

