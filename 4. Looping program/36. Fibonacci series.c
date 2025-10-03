#include<stdio.h>
int main()
{
    int i, x, y, z, n;
    x=0, y=1;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d, ", x);
        z = x + y;
        x = y;
        y = z;
    }
    return 0;
}
