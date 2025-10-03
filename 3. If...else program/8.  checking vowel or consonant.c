#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                printf("It is Vowel");
            else
                printf("It is consonant");
        }

    else if(ch>='A' && ch<='Z')
        {
            if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
                printf("It is Vowel");
            else
                printf("It is consonant");
        }
    else
        printf("It is not alphabet");

    return 0;
}

