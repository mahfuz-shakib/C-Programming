#include<stdio.h>
int main()
{
    /* P=Principle, T=Time, R=Rate, CI=Compound Interest*/
    float P, T, R, CI;
    printf("Enter Principle Amount: ");
    scanf("%f", &P);
    printf("Enter Time: ");
    scanf("%f", &T);
    printf("Enter Rate: ");
    scanf("%f", &R);

    CI=P*pow((1+R/100),T);

    printf("Compound Interest: %.2f", CI);

    return 0;
}

