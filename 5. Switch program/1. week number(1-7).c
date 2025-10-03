#include<stdio.h>

int main()
{
    int wn;
    printf("Enter week number between 1 to 7: ");
    scanf("%d", &wn);

    switch(wn)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid! Please enter week number between 1 to 7");
    }
    return 0;
}

