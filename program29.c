#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,60,70,90,90,100};
    int length = 0;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",n);
   
    return 0;
}