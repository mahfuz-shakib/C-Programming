#include<stdio.h>
int main()
{
    int i, max, sl, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int num[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
    max=num[0];
    sl=num[0];
    for(i=1; i<size; i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    for(i=1; i<size; i++)
    {

        if(sl<num[i] && num[i]!=max)
            sl=num[i];
    }
    printf("Second largest value: %d\n", sl);
    return 0;
}

