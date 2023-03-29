#include<stdio.h>
  int main()
  {
       int a[5],sum=0,i;
       printf("enter the element of array:");
        for(i=0;i<5;i++)
        {
          scanf("%d",&a[i]);
        }
        //printf("sum of array element:");
          for(i=0;i<5;i++)
          {
            sum=sum+a[i];
            printf("the sum of element is \n:%d",sum);
          }
    return 0;
  }







    



  