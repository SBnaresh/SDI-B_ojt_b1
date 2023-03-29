/*printf following pattern
       1
       1 2 3
       1 2 3 4
       1 2 3 4 5
       1 2 3 4 5 6 */
#include<stdio.h>
int main()
{
    int i,n,in;
   printf("enter the n value\n");
   scanf("%d",&n);
   i=1;
    while (i<=n)
   {
   printf("\n"); 
   in=1;
   while(in<=i)
   {
    printf("%d",in);
    in= in+1;
   }   
   i=i+1;
   }
   return 0;
   
}