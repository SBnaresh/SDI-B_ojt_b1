#include<stdio.h>
#define NUM a>b ? (a>c ? a:c): (b>c ? b:c)
int main()
{
	int a,b,c;
	printf("enter three no");
    scanf("%d %d %d",&a,&b,&c);
	NUM;
	printf("the bigest in three number is  %d \n",NUM);
	return 0;
}
