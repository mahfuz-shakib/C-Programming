#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main()
{
    int b, p;
    scanf("%d%d", &b, &p);
    int y = pow(b, p);
    printf("Power = %d", y);
    return 0;
}
/*int power(int x, int y)
{
    if(y==0)
        return 1;
    else if (y>0)
        return x*power(x, y-1);
    else
        return 1/x
}
*/
