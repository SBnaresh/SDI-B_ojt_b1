#include<stdio.h>

int main()
{
    int a = 5, b = 10 ,res;

    res = ( (a <= b) || (a != b) ); 

    printf("Return value of OR expression is %d\n",res);

    res = ( ( a < b) && (a == b ) ); 

    printf("Return value of AND expression is %d\n",res);

    res = ! ( ( a < b) && (a == b ) ); 
    
     
    printf("Return value of and expression is %d\n",res);

    return 0;
}