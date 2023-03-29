#include<stdio.h>
  int main()
  {
    int x;
      int *p=&x;
      float *f=&x;
      char *ch=&x;
      double *d=&x;
      printf("%d\n",sizeof(p));
 printf("%d\n",sizeof(f));
  printf("%d\n",sizeof(ch));
 printf("%d\n",sizeof(d));

return 0;
  }