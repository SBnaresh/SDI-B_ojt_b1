#include<stdio.h>
 int main()
    {
        int n;
        printf("enter a no.");
        scanf("%d",&n);
           do
        {
       printf("%d\n",n);
       ++n;
          }
       while(n<=15000);
       return 0;
    }