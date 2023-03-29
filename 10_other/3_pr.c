#include<Stdio.h>
int main(int argc , char *argv[])
{
    enum Days{Mon, Tue, Wed,Thu,Fri,Sat,Sun};
    enum Days eDay= Mon;
    printf("Mon =%d\n",eDay);
    eDay = Tue;
    printf("Tue=%d\n",eDay);
    return 0;
}