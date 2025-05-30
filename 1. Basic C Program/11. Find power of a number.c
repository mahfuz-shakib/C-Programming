#include<stdio.h>
int main()
{
    double base, expo, ans;

    printf("Enter Base: ");
    scanf("%lf", &base);
    printf("Enter Exponent: ");
    scanf("%lf", &expo);

    ans = pow(base,expo);
    printf("%.2lf^%.2lf = %.2lf", base, expo, ans);
    return 0;
}
