#include<stdio.h>
int maxnumber(int *p, int *q)
{
    if(*p > *q)
    {
        return *p;
    }
    else
    {
        return *q;
    }
}
int main()
{
    int x=0,y=0;
    printf("\nEnter a number:");
    scanf("%d",&x);
    printf("\nEnter second number:");
    scanf("%d",&y);
    printf("\nMax number is:%d",maxnumber(&x,&y));
    return 0;
}