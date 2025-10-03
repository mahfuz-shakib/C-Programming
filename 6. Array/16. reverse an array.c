#include<stdio.h>
int main()
{
    int i,size,k=0;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size], array[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=size-1; i>=0; i--)
    {
        array[k]=arr[i];
        k++;
    }
    for(k=0; k<size; k++)
    {
        printf("%d ", array[k]);
    }

    return 0;
}
