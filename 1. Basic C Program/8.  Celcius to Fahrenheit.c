#include<stdio.h>
float main()
{
    float cel, fah;
    printf("Enter Celcius: ");
    scanf("%f", &cel);

    fah = ((9*cel)/5+32);
    printf("Fahrenheit: %.2f\n", fah);

    return 0;
}
