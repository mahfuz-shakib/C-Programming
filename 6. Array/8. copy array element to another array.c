#include<stdio.h>
int main()
{
    int i, size;

    printf("Enter array size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];

    printf("Enter array1 elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i=0; i<size; i++)
    {
        arr2[i]=arr1[i];
    }

    printf("\n\nArray2 Elements: ");
    for(i=0; i<size; i++)
    {
        printf("%d  ", arr2[i]);
    }

    return 0;
}

