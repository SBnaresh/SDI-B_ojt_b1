#include<stdio.h>

  int main()
  {
    int a[7],i,element;
       printf("enter the array element ");
         for(i=0;i<5;i++){
        scanf("%d",&a[i]);
         }
         printf("\n enter  element to insert \n ");
            scanf("%d",&element);
            a[i]=element;
            printf("/nthe new element array is\n");
                for(i=0;i<6;i++)
                {
                printf("%d\n",a[i]);
                }
          return 0;
 }