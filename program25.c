#include<stdio.h>
void bankTransfer(int *accountBalance1, int *accountBalance2, int amt)
{
    *accountBalance1 = (*accountBalance1)- amt;
    *accountBalance2 = (*accountBalance2)+ amt;   
}
int main()
{
    int balance1 = 0, balance2 = 0, amount = 0;
    printf("\nEnter balance in account1:");
    scanf("%d",&balance1);
    printf("\nEnter balance in account2:");
    scanf("%d",&balance2);
    printf("\nEnter amount to transfer:");
    scanf("%d",&amount);
    printf("\nBefore transaction between 2 accounts:%d,%d",balance1,balance2);
    bankTransfer(&balance1,&balance2,amount);
    printf("\nAfter transaction between 2 accounts:%d,%d",balance1,balance2);
    return 0;

}
