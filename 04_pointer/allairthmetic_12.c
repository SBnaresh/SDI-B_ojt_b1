#include<stdio.h>
int add(int , int );     /*function declaration */
int sub(int a, int b);
int mul(int a, int b);
int div(int a , int b);
int  (*fun)(int , int );

int add(int a, int b)  // function defination
{
return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a , int b)
{
    return a*b;
}
int div(int a , int b)
 {
    return a/b;
 }
int main()
{
    char ch;
    scanf("%c",&ch);
    int x;
    switch(ch)
    {
       case'+':
          fun = add;  // functioon calling 
          x=fun(5,10);
          printf("value is%d\n",x);
          break;
        case '-':
        fun=&sub;
        x=fun(10,5);
        printf("value id %d\n",x);
        break;
        case '*':
         fun=mul;
         x=fun(10,5);
         printf("%d\n",x);
          break;
        case '/':
         fun=div;
         x=fun(10,5);
   printf("%d\n",x);
       break;
       default: printf("invalid");
    }
    return 0;
}
