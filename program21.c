#include<stdio.h>

int sumofRange(int);
int main()
{
    int number=0;
    printf("Enter a number:");
    scanf("%d",&number);
    int sum=sumofRange(number);
    printf("Sum of %d is=%d",number,sum);
    return 0;
}
int sumofRange(int num)
{
    int res;
    if(num==1)
    {
        return 1;
    }
    else
    {
        res=num+sumofRange(num-1);
    }
    return res;
}