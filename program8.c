#include<stdio.h>
int main()
{
    char ch='\0';
    printf("Input a character:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='E' || ch=='e' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("%c Is a vowel",ch);
    }
    else
    {
        printf("%c Is a consonant",ch);
    }
    return 0;
}
