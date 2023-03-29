#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    printf("your all data type size is mentation bellow:-\n");
    printf(" int is = %d byte \n ",sizeof(a));
    printf(" char is = %d byte \n",sizeof(b));
    printf(" float is = %f byte \n",sizeof(c));
    printf(" double is = %d byte \n",sizeof(d));
    printf(" address of a is = %d\n", &a);
    printf(" address of char  is = %d\n ", &b);
    printf(" aaddress of  float is =%f\n", &c);
    printf(" address fo  the double  is = %d\n",&d);
    return 0;
}