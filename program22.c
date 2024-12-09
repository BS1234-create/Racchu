#include<stdio.h>
int main()
{
    int x=0,y=0;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Address of x:%p",&x);
    printf("\nAddress of y:%p",&y);

    int *p=&x, *q=&y;
    if(*p > *q)
    {
        printf("\nMax number is:%d", *p);
        printf("\naddress:%p",p);
    }
    else 
    {
        printf("Max number is:%d",*q);
        printf("\naddress:%p",q);
    }
    return 0;
}
