#include<stdio.h>
int main()
{
  int a[5]={1,2,3,4,5},*p;
  p=a;
 /*printf("%d\n",*(p+5));
 printf("%d\n",(p+5));
 printf("%dn",*(p+2));
 printf("%d\n",(p+2));
 printf("%d\n",(p+5)-(p+2));*/
 printf("%d\n",*(a+0));
 printf("%d\n",*(p+0));
return 0;    
}