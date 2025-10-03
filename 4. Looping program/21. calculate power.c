//find power
#include<stdio.h>
int main()
{
    /* b = base
    e=exponent;
    p=power;
    */
    int i, b, e;
    long long int p=1;
    printf("Enter base & exponent: ");
    scanf("%d%d", &b, &e);
    for(i=1; i<=e; i++)
    {
        p = p * b;
    }
    printf("Power = %d\n", p);
    return 0;
}

