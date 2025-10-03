#include<stdio.h>
int main()
{
    float a, b, c;
    float D, x1, x2, imag;
    printf("Enter value of a, b , c: ");
    scanf("%f%f%f", &a, &b, &c);
    D = (b*b - 4*a*c);

    switch(D>0)
    {
        case 1:
            {


            x1 = (- b + sqrt(D)) / (2*a);
            x2 = (- b - sqrt(D)) / (2*a);
            printf("X1 = %.2f\n X2 = %.2f", x1, x2);
            break;}
        case 0:
            switch(D<0)
            {
                case 1:
                    x1=x2= -b/(2*a);
                    imag=sqrt(-D) / (2*a);
                    printf("X1 = X2 %.2f\n imag = %.2f", x1, x2, imag);
                    break;
                case 0:
                    x1=x2= -b/(2*a);
                    printf("X1=X2=%.2f", x1, x2);
                    break;

            }
    }
    return 0;
}

