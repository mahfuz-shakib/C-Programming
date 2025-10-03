#include<stdio.h>
int main()
{
    int a, b, c;
    float D, x1, x2, imaginary;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    D = (float)b*b - 4*a*c;

    if(D>0)
    {
        x1 = (- b + sqrt(D)) / ( 2 * a);
        x2 = (- b - sqrt(D)) / ( 2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if(D==0)
    {
        x1 = x2 = - b / ( 2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if(D<0)
    {
        x1 = x2 = - b / ( 2 * a);
        imaginary = sqrt(-D) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
        printf("imaginary = %.2f\n", imaginary);
    }

    return 0;
}
