#include<stdio.h>
  int main()
  {
     int number,i=0,x;
     scanf("%d",&number);
     for(i=4;i>=0;i--)    
     {
        x=(number>>i)& 0x01;
        printf("%d\t",x);
     }
     return 0;
  }