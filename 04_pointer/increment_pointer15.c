#include <stdio.h>

int main() 
{
  int a;
  int *p;

  a = 10;
  p = &a;

  (*p)++; //Post Increment
  printf("\n[a]:Increment Value of A = %d", (*p)++);

  ++(*p); //Pre Increment
  printf("\n[a]:Increment Value of A = %d", a);


  (*p)--; 
  printf("\n[a]:Decrement Value of A = %d", &a);

  --(*p);
  printf("\n[a]:Decrement Value of A = %d", &p);

  return 0;
}