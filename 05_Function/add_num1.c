#include<stdio.h>
    int add(int a,int b)// (function declaration)
    {
        int add(int a, int b); //function defination formal variable
        int c;
        c=a+b;
        return c;
        
    }

    int main()
    {
      int a,b,c;
      printf("enter two no.");
      scanf("%d %d",&a ,&b);
         c=add(a,b);// actual variable
         printf("%d\n",c);
         return 0;


    }

  
