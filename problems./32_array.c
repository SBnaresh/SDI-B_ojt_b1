#include<stdio.h>
int main()
{
    int i, sum =0,avg;
    int marks[5];
   for ( i = 0 ; i < 5 ; i++ )
{
printf ( "Enter marks " ) ;
scanf ( "%d", &marks[ i ] ) ; /* store data in array */ 
}
for ( i = 0 ; i < 5 ; i++ )
sum = sum + marks[ i ] ; /* read data from an array*/
avg = sum / 5 ;
printf ( "Average marks = %d\n", avg ) ;
return 0 ;
}