#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the three no\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("the largest no is x = %d",x);
    }
    if(y>x && y>z)
    {
        printf("the largest no is y = %d",y);
    }
    if(z>x && z>y)
    {
    printf("the largest no is z = %d",z);
    }
    return 0;
}
