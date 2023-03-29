#include<stdio.h>
int main()
{
    int num;
    printf("enter the value if i\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
         printf("Sunday");
        break;
    case 2:
         printf("Monday");
        break;
    case 3:
         printf("Tuesday");
        break;
    case 4:
         printf("Wednsday");
        break;
    case 5:
         printf("thrusday");
        break;
    case 6:
         printf("friday");
        break;
    case 7:
         printf("Satruday");
        break;

    
    default:
      printf("you enter the diffrent no \n");
        break;
    }
return 0;
}