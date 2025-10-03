#include<stdio.h>
int main()
{
    float bs, gs, hra, da;
    printf("Basic salary: ");
    scanf("%f", &bs);

    if(bs<=10000)
    {
        hra = bs * 20/100;
        da = bs * 80/100;
    }
    else if(bs>=10001 && bs<=20000)
    {
        hra = bs * 25/100;
        da = bs * 90/100;
    }
    else if(bs>=20001)
    {
        hra = bs * 30/100;
        da = bs * 95/100;
    }

    gs = bs + hra + da;
    printf("Gross salary: %.2f\n", gs);

}
