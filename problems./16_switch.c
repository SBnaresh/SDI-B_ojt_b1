#include<stdio.h>
int main()
{
    int i ;
    printf(" enter the value of i\n");
    scanf(" %d",&i);
    switch (i)
    {
    case 1:
        printf("your choice is 1\n");
        break;
    case 2:
        printf("ypur choice is 2\n");
        break;
    case 3:
       printf("your choice is 3 \n");  
    default:
       printf("yout choice is diffrent");
        break;
    }
 return 0;
}