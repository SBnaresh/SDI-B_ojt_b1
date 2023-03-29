#include<stdio.h>
int main()
{
    static char s[125] ="The cocaine man";
    int i=0;
    char ch;
    ch=s[++i];
    printf("%c",ch);
    ch=s[i++];
     printf("%c",ch);
    ch=++i[s];
     printf("%c",ch);
    ch=++i[s];
    printf("%c",ch);
    return 0;
}