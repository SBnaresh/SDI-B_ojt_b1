#include<stdio.h>
  int swap (int, int);//function declearation
  int swap(int a, int b)//function defination
  {
      int temp=0;
      temp=a;
      a=b;
      b=temp;
      printf("%d %d\n",a,b);
      }
      int main()
      {
        int a=5,b=6;
        printf("%d %d\n",a,b);
        swap(a,b);//function calling
        printf("%d %d\n",a,b);
 }
     
      