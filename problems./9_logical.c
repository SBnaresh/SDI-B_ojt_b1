#include<stdio.h>
int  main()
{
    int a , b, c1,c2;

    printf(" enter two no ");
    scanf("%d  %d", &a, &b);
    c1= a&&b;
    c2= a||b;
    printf("logical AND =%d\n", c1);
    printf("logical OR=%d\n",c2);
    return  0;
}