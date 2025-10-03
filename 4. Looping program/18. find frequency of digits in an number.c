#include<stdio.h>
#include<math.h>
int main()
{
    int i=0, n, rem, c=0, m;
    scanf("%d", &n);
    m=n;
    while(i<=9)
    {
        rem = n % 10;
        if(i == rem)
            {
                c++;
            }
            n /= 10;
        if(n == 0)
            {
                printf("%d have %d times\n ", i, c);
                i++;
                c=0;
                n = m;
            }
    }
    return 0;
}
