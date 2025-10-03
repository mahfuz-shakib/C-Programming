#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3)
        {
            printf("The triangle is Equilateral\n");
        }
    else if(side1==side2 || side2==side3 || side3==side1)
        {
            printf("The triangle is Isosceles");
        }
    else
        {
            printf("The triangle is Scalene");
        }
    return 0;
}
