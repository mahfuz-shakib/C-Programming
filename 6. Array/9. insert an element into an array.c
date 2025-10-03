#include<stdio.h>
int main()
{
    int i, s, ie, p;
    printf("array size: ");
    scanf("%d", &s);
    int arr1[s], arr2[s+1];
    printf("\nArray elements: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nInput element to insert: ");
    scanf("%d", &ie);

    printf("\nInput position where to insert: ");
    scanf("%d", &p);

    for(i=0; i<=s; i++)
    {
        if(i<p-1)
            arr2[i]=arr1[i];
        else if(i==p-1)
        {
            arr2[i]=ie;
        }
        else
        {
            arr2[i]=arr1[i-1];
        }
    }
    for(i=0; i<=s; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
