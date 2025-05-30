#include<stdio.h>
int main()
{
    float cm, m, km ;

    printf("Enter Length in Centimeter: ");
    scanf("%f", &cm);
    m = (cm/100);
    printf("Length in Meter: %.2f\n", m);
    km = (cm/100000);
    printf("Length in Kilometer: %.2f\n", km);

    return 0;
}

