#include<stdio.h>
  int main()
  {
    int num;
    printf("enter the number whih u cheq ");
    scanf("%d",&num);
     if(num % 2==0)
     {
        printf("num=%d is even",num);
      }
      else
      {
        printf("%d=num is odd",num);
      }
    return 0;
    }