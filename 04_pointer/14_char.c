#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n, i;
    char *ptr;
    printf ("Enter number of characters to store: ");
    scanf ("%d", &n);
    ptr = (char *) malloc (n * sizeof (char));
    for (i = 0; i < n; i++)
    {
        printf ("Enter ptr[%d]: ", i);
       
        scanf (" %c", ptr + i);
    }
    printf ("\nPrinting elements of 1-D array: \n\n");
    for (i = 0; i < n; i++)
    {
        printf ("%c ", ptr[i]);
    }
    
    return 0;
}