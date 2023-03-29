#include<stdio.h>
  int main()
  {
     int a[5]={1,2,3,4,5},*p;
     p = &a;
     printf("%d\n",p);
     p++;
     printf("%d\n",p);
     return 0;
  }
  