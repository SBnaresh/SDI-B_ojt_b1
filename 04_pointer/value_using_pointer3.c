#include<stdio.h>
  int main()
  {
   int *p;
   int a=10;
   p=&a;
  printf("value of a is %d\n",a);
  printf("address of a is %p\n",&a);
  printf("value of p is %d\n",p);
  printf("address of p is %p\n",&p);
  return 0;


  }