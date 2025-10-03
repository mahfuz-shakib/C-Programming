#include<stdio.h>
int main()
{
    int i, j, temp, size,min;
    scanf("%d", &size);
    int arr[size];

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<size; i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[min];
        arr[min]=arr[j];
        arr[j]=temp;

    }



    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

