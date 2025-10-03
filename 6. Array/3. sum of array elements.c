#include<stdio.h>
int main()
{
    int i, size, sum;
    printf("Enter array size: ");
    scanf("%d", &size);
    int num[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("Sum: %d", sum);
    return 0;
}
