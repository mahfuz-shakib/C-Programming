#include<stdio.h>
int main()
{
    int i, max, min, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int num[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=1; i<size; i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
        if(min>num[i])
        {
            min=num[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}
