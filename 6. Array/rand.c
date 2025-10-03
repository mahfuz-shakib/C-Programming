#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, n;
    int a[100]={0};
    int i=0, c=0;
    scanf("%d", &n);
    scanf("%d", &x);

    while(i<n)
    {
        a[i] = rand()%100;
        i++;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
        if(a[i]==x)
            c++;
    }
    printf("\n%d have %d times", x, c);
    return 0;
}
