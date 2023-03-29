// one two three
 #include<stdio.h>
#include<stdlib.h>
    int main(int argc, char **argv)
    {
        int i;
        for (i=0;i<3;i++)
       printf("%u\n",&argv[i]);
       return 0;
 
    }
