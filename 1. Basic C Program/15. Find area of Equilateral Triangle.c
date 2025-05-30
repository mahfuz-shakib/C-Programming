#include<stdio.h>
float main()
{
    float  side, area;

    printf("Enter Side of Equilateral Triangle: ");
    scanf("%f", &side);

    area = ((side*side)*sqrt(3))/4;
    printf("Area of Equilateral Triangle = %.2f\n", area);

    return 0;
}



