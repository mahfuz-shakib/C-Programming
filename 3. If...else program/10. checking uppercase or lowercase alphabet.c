#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
        printf("It is uppercase alphabet");
   else if(ch>='a' && ch<='z')
        printf("It is lowercase alphabet");
    else
        printf("It is not Alphabet");
    return 0;
}

