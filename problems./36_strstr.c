#include<stdio.h>
int main()
{
char  name[20]="nareshmeghwal";;
int i;
for(i=0;name[i]!='\0';i++)
{
name[i]=name[i]-32; // whrn  upper to lower that time put + sign (name[i]+32); you will get  uooer to lower
}
printf("%s",name);
return 0;
}