#include<stdio.h>
   int sqr(int a);
     
      int main()
      {
        int a,b;
           printf("enter the num.");
        scanf("%d",&a);
       b=sqr(a);
       printf("%d\n",b);
    return 0;
   }
     
        int sqr(int a){
       return (a*a);
      }