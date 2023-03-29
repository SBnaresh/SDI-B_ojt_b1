#include<stdio.h>
int main()
{
    int i;
    printf("enter the  value of i\n");
    scanf("%d",&i);
    if(i<15)
    {
        printf("i=%d is less then 15 \n");
        printf("so you are under15\n",i);
        if(i<10)
        {
            printf("i=%d is to less then 10 \n");
            printf("so you are a child\n",i);
        }
        else{
            printf("i=%d  in between chilf and teen \n",i);
        }
    
        
    }
    else
    {
         printf("i=%d is greater then 15 \n");

    }
    return 0;
}