#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of A and b\n");
    scanf("%d %d", &a,&b);
    if(a>b)
    {
        printf("a=%d is greteer then b",a);
    }
    else if (b>a)
    {
        printf("b=%d is greternthen A\n",b);
    }
    else{
        printf("both are equal");
    }
    return 0;
}