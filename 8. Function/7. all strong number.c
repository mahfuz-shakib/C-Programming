#include<stdio.h>
void allStrong(int n1, int n2);
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    allStrong(num1, num2);
}
void allStrong(int n1, int n2)
{
    int x;
    for(x=n1; x<=n2; x++)
    {
        int i;
        int s=0, t=x;

        while(t!=0)
        {
            int r=0, fact=1;
            r=t%10;
            for(i=1; i<=r; i++)
            {
                fact = fact * i;
            }

            s = s + fact;
            t/=10;
        }

        if(s==x)
            printf("%d, ", x);
    }
}
