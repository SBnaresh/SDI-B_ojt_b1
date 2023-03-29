#include<stdio.h>
   int main()
   {
      struct value
      {
        int bit_1: 1;
         int bit_3: 4;
          int bit_4: 4;
      }bit = {1,2,13};
      printf("%d %d %d %d\n",bit.bit_1,bit.bit_3,bit.bit_4);
   return 0;
   }
