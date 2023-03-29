#include<stdio.h>
#include<unixio.h>

void disp();

int main()
{
    int a=10,b=-10;
    printf("\n file in use :%s\n",__FILE__);
    printf("\n present Line :%d,__LINE");
    printf("\n Present Function: %s",__func__);
    disp();
    printf("\n present Date : %s",__DATE__);
    printf("\n Standard c : %d",__STDC__);
    printf("\n");
}
void disp(){
printf("\n present Function : %s"__FUNCTION__);
}