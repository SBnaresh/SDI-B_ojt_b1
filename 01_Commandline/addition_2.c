#include<stdio.h>
   int main(int argc,char*argv[])
{
      int sum=0,i,n;
	for(i=1;i<argc;i++)
     sscanf(argv[i],"%d",&n);
     sum=sum+n;
     {
 printf("%d",sum);
      }
 return 0;	
}