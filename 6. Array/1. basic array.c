#include<stdio.h>
int main()
{
    int i, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
         printf("%d, ", arr[i]);
    }
   return 0;
}
