#include<stdio.h>
int main()
{
      int number=0;
      printf("Enter a number:");
      scanf("%d",&number);
      if(number % 3==0 && number % 5==0)
      {
        printf("Is a multiple of 3 and 5");

      }
      else
      {
          printf("Is not a multiple of 3 and 5");
      }
      return 0;
}
