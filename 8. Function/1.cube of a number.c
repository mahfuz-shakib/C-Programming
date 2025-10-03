#include<stdio.h>
int cube(int n);
int main()
{
    int num;
    scanf("%d", &num);
    int c = cube(num);
    printf("Cube of %d is %d", num, c);
    return 0;
}
int cube(int n)
{
    return (n*n*n);
}
