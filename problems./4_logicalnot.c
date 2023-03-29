#include<stdio.h>
int  main()
{
    int a=5,b=6,c1,c2;
    c1=!(b>a);
    c2=!(a>b);
    printf("%d\n",c1);
    printf("%d\n",c2);
    return 0;

}