#include<stdio.h>
float main()
{
    float ang1, ang2, ang3;

    printf("First Angle: ");
    scanf("%f", &ang1);

    printf("Second Angle: ");
    scanf("%f", &ang2);

    ang3 = (180-(ang1+ang2));
    printf("Third Angle of Triangle = %.2f\n", ang3);

    return 0;
}

