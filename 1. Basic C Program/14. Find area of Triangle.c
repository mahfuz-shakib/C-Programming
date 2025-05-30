#include<stdio.h>
float main()
{
    float b, h, area;

    printf("Enter Base: ");
    scanf("%f", &b);

    printf("Enter Height: ");
    scanf("%f", &h);

    area = (b*h)/2;
    printf("Area of Triangle = %.2f\n", area);

    return 0;
}


