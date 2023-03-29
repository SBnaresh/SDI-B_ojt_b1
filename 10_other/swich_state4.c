#include<stdio.h>
 enum states{on,off};
 int main()
 {
 int n; 
 enum states s;
 printf("enter the no ");
 scanf("%d",&n);  
    if(n==off)
    {
        printf("off");
    }
   else
{
    printf("on");
}
 return 0;
 
 }
