#include<stdio.h>
int main()
{
    int find, i, j, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nUnique elements are: ");
   for(i=0; i<size; i++)
   {
       find=0;
       for(j=0; j<size; j++)
       {
           if(a[i]==a[j])
               find++;
           if(find>1)
               break;
       }
       if(find==1)
       {
           printf("%d ", a[i]);
       }
   }
    return 0;
}

