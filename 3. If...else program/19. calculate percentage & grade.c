
#include<stdio.h>
int main()
{
    int phy, che, bio, math, comp, total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &phy, &che, &bio, &math, &comp);

    total = phy + che + bio + math + comp;
    percentage = ((float)total/500)*100;

    if(percentage>=90)
    {
        printf("Grade 'A'");
    }
    else if(percentage>=80)
    {
        printf("Grade 'B'");
    }
    else if(percentage>=70)
    {
        printf("Grade 'C'");
    }
    else if(percentage>=60)
    {
        printf("Grade 'D'");
    }
    else if(percentage>=40)
    {
        printf("Grade 'E'");
    }
    else
    {
        printf("Grade 'F'");
    }
    return 0;
}
