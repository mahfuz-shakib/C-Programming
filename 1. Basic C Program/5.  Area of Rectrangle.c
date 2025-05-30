
#include<stdio.h>
float main()
{
    float x, y, area, diagonal;

    printf("Enter Length: ");
    scanf("%f", &x);

    printf("Enter Wide: ");
    scanf("%f", &y);

    area = x*y;
    printf("Area of Rectrangle = %.2f\n", area);

    diagonal = sqrt(x*x+y*y);
    printf("Diagonal of Rectrangle = %.2f\n", diagonal);

    return 0;
}
