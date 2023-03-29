#include<stdio.h>
  int main(int argc, char*argv[])
  {
    int a,b,res;
    sscanf(argv[1],"%d",&a);
    sscanf(argv[2],"%d",&b);
  
  if(strcmp(argv[3],"A")==0)
    {
        res= a+b;
        printf("the sum is %d",res);
    }
    elseif(strcmp(argv[3],"S")==0)
      {
        res=a-b;
        printf("the sub is%d",res);
       }
    elseif(strcmp(argv[3],"D")==0)
     {
        res=a/b;
        printf("the sub is%d",res);
    }
     elseif(strcmp(argv[3],"M")==0)
     {
        res=a*b;
        printf("the sub is%d",res);
    }
    return 0;
  }

