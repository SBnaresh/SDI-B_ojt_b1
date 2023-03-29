#include<stdio.h>
#define MAX 10
#define MIN 20
  int main()
  {
     #if MAX
         #if defined MIN
            #if(MAX>0 && MIN>0)
              printf("\n positive numbers\n");
            #else 
              printf(:\n negative numbers\n);
             #endif
        #else
            printf("\n ERROR: MIN not Defined");
        #endif
    #else
        printf("\n ERROR: MAX not Defined \n");
    #endif
  }