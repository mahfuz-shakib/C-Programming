//write a program to find out alphabet or not

#include<stdio.h>

int main()

{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("This is Alphabet");
    }
    else
    {
         printf("This is not Alphabet");
    }

   return 0;
}
