#include<stdio.h>
int main()
{
    int m, c=0, i, j, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int a[size];

    printf("\nEnter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }


    for(i=0; i<size; i++)
    {
        m=0;
        for(j=0; j<i; j++)
        {
            if(a[j]==a[i])
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            c++;
        }

    }
    printf("Total duplicate elements= %d", size-c);
    return 0;

}
