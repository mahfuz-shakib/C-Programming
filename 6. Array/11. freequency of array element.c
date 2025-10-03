#include<stdio.h>
#define size 10
int main()
{
    int arr[size]= {4,4,2,4,50,5,10,1,2,2};
    int i, j, k, c, m=0;
    for(i=0; i<size; i++)
    {
        c=0;
        m=0;
        for(k=0; k<i; k++)
        {
            if(arr[k]==arr[i])
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            for(j=i; j<size; j++)
            {
                if(arr[i]==arr[j])
                    c++;
            }
            printf("%d have %d times\n", arr[i], c);
        }

    }
    return 0;

}
