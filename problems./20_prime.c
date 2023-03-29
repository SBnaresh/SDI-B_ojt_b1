#include<Stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
     {
        if(n%i==0)
        break;
     }
     if(i==n && n>=2)
     printf("the no is prime\n");
     else
     printf(" not prime");
     return 0;
}