#include<stdio.h>
 int main()
 {
    int num;
   printf( " enter the num of the day ");
   scanf("%d",&num);
   switch(num)
      {
    case 1:
          printf("sunday");
          break;
    case 2:
          printf("monday");
          break;
    case 3:
          printf("tuesday");
          break;
    case 4:
          printf("wednesday");
          break;
    case 5:
          printf("thrusday");
          break;
    case 6:
          printf("friday");
          break;
    case 7:
          printf("saturday");
          break;
    default: printf("you enter neax no.");
          }
          return 0;
 }