#include<stdio.h>
float main()
{
    float r, area, diam, peri;

    printf("Enter Radius: ");
    scanf("%f", &r);

    diam = r/2;
    printf("Diameter of Circle = %.2f\n", diam);

    area = 3.1416*r*r;
    printf("Area of Circle = %.2f\n", area);

    peri = 2*3.1416*r;
    printf("Perimeter of Circle = %.2f", peri);

    return 0;
}

