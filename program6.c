#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number:");
    scanf("%d",x);
    int flag=0;
    for(int i=0; i<=x; i++)
    {
        if(i*i==x)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
        }
        if(flag==1)
        {
          printf("Is a perfect square number");
        }
        else
        {
            printf("Is not a perfect square number");
        }
        return 0;
    }

