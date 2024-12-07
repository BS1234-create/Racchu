#include<stdio.h>
int main()
{
    int rows=0;
    printf("Enter row numbers:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

