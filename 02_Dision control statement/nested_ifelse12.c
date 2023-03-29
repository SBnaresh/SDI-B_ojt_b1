#include<stdio.h>
int main()
{
  int a,b;
  printf("enter two no ");
  scanf("%d %d",&a,&b);
    if(a!=b){
      printf(" a=%d  si not equal to b= %d",a,b);
          if(a>b)
          {
            printf("a=%d is greter then b=%d",a,b);
          }
          else
          {
            printf("a=%d is less then b=%d");
          }
          
        }
     else{
    printf("a=%d is equal to  b=%d",a,b);
    }
    return 0;

}