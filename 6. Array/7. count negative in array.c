#include<stdio.h>
int main()
{
    int i, size, c=0;

    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
       if(arr[i]<0)
        c++;
    }
    printf("Total negative numbers: %d\n", c);
    return 0;
}
