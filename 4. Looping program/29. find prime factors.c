
//find prime number
#include<stdio.h>
int main()
{
    int i, j, n, c;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c=1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    c=0;
                    break;
                }
            }
            if(c==1 && i>1)
            {
                printf("%d ", i);
            }

        }

    }
    return 0;
}

