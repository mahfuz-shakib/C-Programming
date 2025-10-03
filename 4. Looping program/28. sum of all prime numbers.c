//find prime number
#include<stdio.h>
int main()
{
    int i, j, n, c, s=0;
    printf("Enter last number: ");
    scanf("%d", &n);
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
        {
            s=s+j;
        }
    }

    printf("Sum = %d", s);
    return 0;
}

