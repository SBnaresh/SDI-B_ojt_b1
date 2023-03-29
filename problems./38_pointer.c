// increment andd decrement operation using pointers.
#include<stdio.h>
int main()
{
    int a= 10,  b=20;
    int *ptr1, *ptr2;
    ptr1= &a;
    ptr2=&b;
    printf(" %d \n",ptr1);
    ptr1++;
    printf("%d\n",ptr1);
    printf("%d \n",ptr2);
    ptr2--;
    printf("%d\n",ptr2);
   return 0;
}