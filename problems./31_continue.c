#include<stdio.h>
int main()
{
    int a=10;
    while(a>0)
    {
        if(a==7)
        {
            a--;
            continue;
        }
        printf("%d \n",a);
         a--;
    }
    return 0;
}