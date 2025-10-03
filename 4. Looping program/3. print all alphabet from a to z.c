#include<stdio.h>
int main()
{
    char ch;
    printf("Print all alphabet a to z:\n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c  ", ch);
    }
    return 0;
}

/*

''''PRINT ALPHABET BY ASCII VALUE''''
{
    int i;
    printf("Alphabets from a - z are: \n");

    // ASCII value of a=97

    for(i=97; i<=122; i++)
    {
        printf("%c\n", i);
    }
    return 0;
}

*/
