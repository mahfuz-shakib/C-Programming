#include<stdio.h>
void allPrime(int n1, int n2);
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    allPrime(num1, num2);
}
void allPrime(int n1, int n2)
{
    int x, i;
    for(x=n1; x<=n2; x++)
    {
        int test = 0;
        for(i=2; i<=sqrt(x); i++)
        {
            if(x%i==0)
            {
                test = 1;
                break;
            }
        }
        if(test==0 && x!=1)
            printf("%d, ", x);
    }
}
