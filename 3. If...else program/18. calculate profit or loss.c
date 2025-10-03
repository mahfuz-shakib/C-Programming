
#include<stdio.h>
int main()
{
    int cost, sell, profit, loss;

    printf("Enter cost price: ");
    scanf("%d", &cost);
    printf("Enter selling price: ");
    scanf("%d", &sell);

    if(cost<sell)
    {
        profit = sell - cost;
        printf("Profit: %d\n", profit);
    }
    else if(sell<cost)
    {
        loss = cost - sell;
        printf("Loss: %d\n", loss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}
