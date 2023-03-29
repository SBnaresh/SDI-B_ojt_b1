#include<stdio.h>
void display(int);
   int main()
   {
      int a ,limit;
      printf("enter the no ");
      scanf("%d",&a);
      display(limit);
        printf("%d",a);
   }
   
       void display(int num){
       if(num){
        display(num-1);
       }
       else{
        return ;
       }
       printf("%d\n",num);
       }




       
 