#include<stdio.h>
   int main()
   {
         int i;
         char c;
         float f;
         double d;

 	printf("    short int is %d bytes \n", sizeof( short int ));
	printf("          int is %d bytes \n", sizeof(i));
	printf("       int * is %d bytes \n", sizeof(float));
	printf("     int * is %d bytes \n", sizeof(char));
	printf("   double is %d bytes \n", sizeof(d));
    return 0;
   }