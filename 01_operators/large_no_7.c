#include<stdio.h>
   int main()
   {
      int a, b, c;
     printf("Enter  number: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
      printf("largest no is in three  no is %d",a > b ? (a > c ? a : c) : (b > c ? b : c));

 
      return 0;
   }