#include<stdio.h>
int power(int b, int p);
int power(int b, int p)
{
    if(p==0)
        return 1;
    else if(p>0)
        return b*power(b, p-1);
    else
        return 1/power(b, -p);
}
int ();
{
    int p, b;
    scanf("%d%d", &b, &p);
    int x = power(b, p);
    printf("power = %d", x);
    return 0;
}
