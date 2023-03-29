#include<stdio.h>
int main()
{
    int a=30,sum=0;
    int b=34;
    int *p,*q;
    p=&a;
    q=&b;
    sum = *p+*q;
    printf("%d",sum );
    return 0;
}