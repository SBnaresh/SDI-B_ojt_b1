#include<stdio.h>
  void cheq(int a );
  int main ()
  {
    int a;
printf("enter the no.");
scanf("%d",&a);
 cheq(a);
  }

void cheq(int a)
{
  if(a%2==0)
  printf("even");
  else
  printf("odd\n");


}

  
