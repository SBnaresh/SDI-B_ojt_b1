#include<stdio.h>
   int main()
   {
      struct value
      {
              int bit_1: 1;
         int bit_3: 4;
          int bit_4: 4;
      }bit;
      printf("%ld\n",sizeof(bit));
      return 0;
      }