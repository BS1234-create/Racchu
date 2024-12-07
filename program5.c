#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number:");
    scanf("%d",&i);
    if(i>=1 && i<=12)
    {
        printf("Valid Month Number");
    }
    else
    {
        printf("Invalid Month Number");
    }
    return 0;
}
