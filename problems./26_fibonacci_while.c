#include<stdio.h>
int main()
{
    int i=0,j=1,k,n;
    printf("enter the value if n \n");
    scanf("%d",&n);
    printf("%d\n%d\n",i,j);
    k=i+j;
    while(k<=n)
    {
        printf("%d\n",k);
        i=j;
        j=k;
        k=i+j;
   }
   return 0;
}