#include<stdio.h>
int main ()
{
    int a = 10, b = 20;
    int *const p = &a;
    printf ("value of a is %d, *p is %d \n ", a, *p);
    *p = 5;  //changing value at address
    printf ("value of a is %d, *p is %d \n ", a, *p);
   // p = &b;  //changing address wrong
    return 0;
}