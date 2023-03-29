#include<stdio.h>
int add(int x, int y)  // function defination
{
return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int mul(int x , int y)
{
    return x*y;
}
int div(int x, int y)
 {
    return x/y;
 }
  void operation(int x,int y,int (*fnptr)(int, int))
 { 
         int z;
         z= fnptr(x,y);
         printf("%d\n",z);
}
void main()
{
    char ch;
    scanf("%c",&ch);
    int a=10 ,b=5;
    switch(ch)
    {
       case'+':
         operation(a,b,add);
          break;
        case '-':
       operation(a,b,sub);
        break;
        case '*':
        operation(a,b,mul);
          break;
        case '/':
        operation(a,b,div);
       break;
       default: printf("invalid");
    }
   
}