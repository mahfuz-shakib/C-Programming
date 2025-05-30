#include<stdio.h>
int main()
{
    /* P=Principle, T=Time, R=Rate, SI=Simple Interest*/
    float P, T, R, SI;
    printf("Enter Principle Amount: ");
    scanf("%f", &P);
    printf("Enter Time: ");
    scanf("%f", &T);
    printf("Enter Rate: ");
    scanf("%f", &R);

    SI=(P*T*R)/100;

    printf("Simple Interest: %.2f", SI);

    return 0;
}
