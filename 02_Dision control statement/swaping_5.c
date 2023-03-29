#include<stdio.h>
  int main()
  {
    int a=10, b=2;
    printf("\nbefore if statement ]n a= %d\n",a,b);
    if(a>b)
    {
        int temp =a;
        a=b;
        b=temp;
    }
       printf("\n bedore if statement \n a=%d =%d\n",a,b);
       return 0;



  }