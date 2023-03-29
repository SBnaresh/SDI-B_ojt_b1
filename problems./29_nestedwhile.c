#include<stdio.h>
int main()
{
    int n, i, dn;
    printf("enter value of n");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("\n");
        dn =i;
        while(dn>=1)
        {
        printf("%d",dn);
        dn=dn-1;
        }
        i=i-1;

    }
    return 0;
}