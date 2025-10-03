#include<stdio.h>
int main()
{
    int i, size, even=0, odd=0;

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
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);
    return 0;
}
