//write a program to find out maximum number between two or three or four or many numbers

#include<stdio.h>

int main()

{
    int num1, num2, num3, num4, max, maximum, maxpro;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    max=(num1>num2)?num1:num2;
    maximum=(max>num3)?max:num3;
    maxpro=(maximum>num4)?maximum:num4;
    printf("Maximum Number: %d", maxpro);

   return 0;
}
