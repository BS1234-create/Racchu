#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is a even number",x);
    }
    else
    {
        printf("%d is a odd number",x);
    }
    return 0;

}