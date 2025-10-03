#include<stdio.h>
int main()
{
    int i, s, ie, p;
    printf("array size: ");
    scanf("%d", &s);
    int arr1[s], arr2[s-1];
    printf("Array elements: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Input position where to delete: ");
    scanf("%d", &p);

    for(i=0; i<s-1; i++)
    {
        if(i<p-1)
            arr2[i]=arr1[i];
        else
        {
            arr2[i]=arr1[i+1];
        }
    }
    for(i=0; i<s-1; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

