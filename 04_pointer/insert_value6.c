#include<stdio.h>
int main()
{
   int a[]={1,2,3,4,5},*p;
     p=a;
     for(int i=0;i<5;i++)
     {
        printf("%d\n",*(p+i));
     }      
     return 0;
     }