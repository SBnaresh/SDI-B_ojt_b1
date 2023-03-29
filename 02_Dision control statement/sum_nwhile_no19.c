#include<stdio.h>
  int main()
  {
     int i ,n ,sum=0;
     printf("enter frist intiger");
     scanf("%d",&n);
    i=1;
    while(i<=n)
     {
       
       sum+=i;
         ++i;
       }
       printf("sum=%d",sum);

      return 0;
   }