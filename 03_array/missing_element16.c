#include<stdio.h>
   int main()
   {
    int array[10]={1,2,3,4,6};
    int length = sizeof(array)/sizeof(int);
    int i=0,number=0;
    for(i=0;i<length;i++)
{
    if(array[i+1]-array[i]==1)
         {
            continue;
         }
        else{
            number=array[i]+1;
            break;
        }
        }
        printf("number=%d",number);
return 0;
   }