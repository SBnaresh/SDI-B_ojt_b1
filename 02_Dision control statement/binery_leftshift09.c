#include<stdio.h>
  int main()
    {  
     int number,i=0,count=0,x;
     scanf("%d",&number);
     for(i=7;i>=0;i--)
     {
        x=(number>>i) & 0x01;
        printf("%d",x);

     }
       printf("\n",number>>2);
       return 0;
    }