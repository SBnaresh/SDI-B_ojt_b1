#include<stdio.h>
#include<stdlib.h>
  int main()
  {
    int *numbers = (int*)malloc(4*sizeof(int));
    int i;
    numbers[0]=0;
    numbers[1]=1;
    numbers[2]=1;
    numbers[3]=1;
    numbers[4]=1;
   printf("\nStored integers are\n");
   for(i=0;i<4;i++)
   printf("numbers[%d]=%d\n",i , numbers);
    return 0;
  }
