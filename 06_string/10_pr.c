#include<stdio.h>
union unionjob
{
    char name[32];
    float slary;
    int workerNo;
}ujob;
   struct structjob
{
    char name[32];
    float salary;
    int workerNo;
} sjob;   
  int main()

{
    printf("size of the union =%ld butes",sizeof(ujob));
    printf("\nsize of structure = %ld bytes\n",sizeof(sjob));
    return 0;
}  