// counrt the vovels and constant in  strring 
#include<stdio.h>
int main()
{
    char name[20]="naresh Meghwal";
    int i, vCount=0,cCount=0;

      for(i=0;name[i]!='\0';i++)
      {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            vCount++;
        }
        else if((name[i]>=65 && name[i]<90)||(name[i]>=97 && name[i]<=122))
        {
            cCount++;
        }
         
       }
       printf("the string is =%s\n",name);
        printf("vovels is = %d\n",vCount);
        printf("connstant is = %d\n",cCount);
        return 0;
}