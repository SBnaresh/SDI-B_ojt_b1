#include<stdio.h>
  int main()
  {
        int num1;
        int num2;
        printf("enter two no ");
        scanf("%d %d",&num1,&num2);
        if(num1<num2)
        {
            printf("num1=%d is greter then num2\n",num1);
        }
        else if(num2>num1)
        {
             printf("num2=%d is greter then  num1 \n",num2);
        }
        else
        {
            printf("both num are the same \n");
        }


        
    return 0;
  }