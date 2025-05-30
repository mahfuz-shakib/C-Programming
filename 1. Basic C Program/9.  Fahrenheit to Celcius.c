#include<stdio.h>
float main()
{
    float cel, fah;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fah);

    cel = ((5*(fah-32))/9);
    printf("Celcius: %.2f\n", cel);

    return 0;
}

