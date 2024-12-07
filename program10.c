#include<stdio.h>
int main()
{
     int i=0,sum;
     printf("Enter a natural number:");
     scanf("%d",&i);
     float average=0;
     for(i=1;i<=10;i++)
     {

        sum=sum+i;
     }
     average=sum/i;
     printf("Sum of natural number is:%d",sum);
     printf("Average of natural numbers is:%f",average);
     return 0;

}
