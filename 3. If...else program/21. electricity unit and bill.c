
#include<stdio.h>
int main()
{
    float unit, rs, bill;
    printf("Enter Electricity units: ");
    scanf("%f", &unit);

    if(unit<=50)
    {
        bill = unit * 0.50;
    }
    else if(unit<=150)
    {
        bill = 25 + (unit-50)*0.75;
        // or, bill = (50 * 0.50) + (unit-50)*0.75;
    }
    else if(unit<=250)
    {
        bill = 100 + (unit-150)*1.20;
        //or, bill = (50 * 0.50) + (100 * 0.75) + (unit-150)*1.20;
    }
    else if(unit>250)
    {
        bill = 220 + (unit-250) * 1.50;
    }

    rs = bill + bill*0.20;
    printf("Electricity Bill: Rs. %.2f\n", rs);

}
