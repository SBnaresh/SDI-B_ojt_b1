#include<stdio.h>
 void swap(int*,int*);
 int main()
 {
     int a=10,b=20;
     printf("before swaping : a=%d,b=%d",a,b);
         swap(&a,&b);
         printf("after swaping:a=%d.b=%d,a,b");
 }
   void swap(int*a,int*b)
   {
    int temp;
    temp=*a;
    *a=temp;
    *b=temp;
    printf("after swaping:a=%d b=%d",*a,*b);
   }    

