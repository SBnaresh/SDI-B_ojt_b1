#include<stdio.h>
 int *fnptr[4](int , int);
 void main()
 {
  int z;
  fnptr[0]=add;
  fnptr[1]=sub;
  fnptr[2]=mul;
  fnptr[3]=div;
  scanf("%c",&choice);

 }
 switch(choice)
{
  case '+':z=(*fnptr,[0](10,30));
    printf("%d",z);
    break;
  case '-': z=(*fnptr[1](10,30));
       printf("%d\n",z);
       break;
  case '*':
       z=(*fnptr[2](10,30));
       printf("%d\n",z);
       break;
   case '/':
   z=(*fnptr[3](10,30));
       printf("%d\n",z);
       break;



}


 