//find prime number
#include<stdio.h>
int main()
{
    while(1)
    {
        int i, n, c=1;
        printf("Enter number: ");
        scanf("%d", &n);
        if(n==-1)break;
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                c=0;
                break;
            }
        }
        if(c==1 && n>1)
            printf("Prime number\n");

        else
            printf("Not Prime number\n");
    }

    return 0;
}

