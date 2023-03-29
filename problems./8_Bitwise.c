#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("enter two no \n");
    scanf("%d %d",&a, &b);
   
    c=~a; // bitwise not operator
    printf("  bitwise not = %d\n ",c);
    
    d = a<<2;  // bitwise left shift operator 
    printf(" bitwise left shift = %d\n",d);

    e= b>>2;  // bitwise right shift
    printf(" bitwise right shift =%d\n",e);

    f= a&b;    // bitwise AND operator
    printf("and is = %d\n", f);

    g= a|b;    // bitwise not operator
    printf("bitwise NOt = %d\n",g);

    h = a^b;  // bitwise XOR opersator
    printf("XOr =%d\n",h);

    return 0;
}  