#include<stdio.h>
int main()
{
    int i, n, value;
     printf("Enter any number: ");
     scanf("%d", &n);
    printf("Multiplication table of %d: \n", n);
     for(i=1; i<=10; i++)
     {
         value = n * i;
         printf("%d * %d = %d\n", n, i, value);
     }
     return 0;
}
