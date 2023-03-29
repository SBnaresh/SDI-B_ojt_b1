#include<stdio.h>
   int main()
   {
      int cho,a,b;
      printf("1, addition\n");
      printf("2,  subtraction\n");
      printf("3, multiplication\n");
      printf("4, division\n");
      printf(" enter your choice\n");
        scanf("%d",&cho);
     printf("\n enter any two no : ");
        scanf("%d %d",&a,&b);
        switch(cho)
        {
            case 1:
                printf("\n sum of two no %d\n",a+b);
              break;
           case 2:
             if(a>b){
                printf("\n diffrence of two no is%d",a-b);
             }
             else{
                printf("\n difffrence of two no is%d",b-a);
             }
            case 3:
                printf("\n product of two no is %d",a*b);
             break;
            case 4:
                printf("\n division of two no is %d\n",a/b);
                 break;
            default:
               {
                printf("\n erro: bad input: re-enter chopice::\n");
               }                
        
        }
        return 0;
   }








        


   