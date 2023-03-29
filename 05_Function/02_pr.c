#include <stdio.h>
void swap( int a , int b)
{
void swap(int a, int b);
    int temp;
    temp=a;
    a=b;
    a=temp;
    printf("%d %d",a,b);

}

int main() 
  {
    printf("enter the two no.");
    scanf("%d %d",&a ,&b);
    swap(a,b);

    printf(" value of a=%d b=%d before swapping", a, b);

   
    return 0;
}