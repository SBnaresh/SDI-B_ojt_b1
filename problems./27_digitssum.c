// find the sum of digits and number iof digits thr no is enterd by keyboard
#include <stdio.h>
int main()
{
    int no, nd, sd, rem;
    printf("Enter a Number : ");
    scanf("%d", &no);
    nd = 0;
    sd = 0;
    while (no > 1)
    {
        rem = no % 10;
        nd = nd + 1;
        sd = sd + rem;
        no = no / 10;
    }   
    printf("The number of digit is %d", nd);
    printf("\nThe sum of digit is %d", sd);
    return 0;
}
