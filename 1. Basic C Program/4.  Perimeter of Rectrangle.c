#include<stdio.h>
float main()
{
    float x, y, peri;

    printf("Enter Length: ");
    scanf("%f", &x);

    printf("Enter Wide: ");
    scanf("%f", &y);

    peri = 2*(x+y);
    printf("Perimeter of Rectrangle = %.2f\n", peri);

    return 0;
}
