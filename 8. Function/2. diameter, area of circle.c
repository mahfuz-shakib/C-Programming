#include<stdio.h>
void circle(float r);
int main()
{
    float radius;
    scanf("%f", &radius);
    circle(radius);
}
void circle(float r)
{
    printf("Area: %.2f\n",(3.1416*r*r));
    printf("Diameter: %.2f\n", 2*r);
    printf("Circumference: %.2f\n", 2*3.1416*r);
    return 0;
}
