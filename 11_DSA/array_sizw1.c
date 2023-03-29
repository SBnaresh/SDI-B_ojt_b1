#include<stdio.h>
 int main()
   {
      int arr[5];
        int i;
        for(i=0;i<5;i++)
        {
            printf("the address  %u \n",&arr[i]);
        }  
     return 0;
   }