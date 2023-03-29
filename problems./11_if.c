#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:\n");
    scanf("%d",&num);
    if(num>10)
    {
        printf("%d is grester then 10\n",num);
        printf("exicute  the block");
    }
    else
    {
        printf("num is lesss then 10 \n out of the  main block");
    }
    return 0;
}