#include<stdio.h>
int main()
{
    int k=0;
    printf("Enter a number:");
    scanf("%d",&k);
    for(int i=1;i<=10;i++)
        printf("%d*%d=%d\n",k,i,k*i);
    return 0;
}
