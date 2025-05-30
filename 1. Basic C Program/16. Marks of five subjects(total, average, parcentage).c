#include<stdio.h>
int main()
{
    int s1, s2, s3, s4, s5;
    float T, A, P;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3,&s4, &s5);

    T=s1+s2+s3+s4+s5;
    printf("Totals Marks: %.2f\n", T);

    A=T/5;
    printf("Average Marks: %.2f\n", A);

    P=(T/500)*100;
    printf("Parcentage: %.2f\n", P);

    return 0;
}
