#include<stdio.h>
int max(int arr[],int size)
{
    int i ,r;
    r = arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>r)
          r=arr[i];
    }
    return r;
}
int main()
{
    int i ,m;
    int arr[5];
    printf("enter element  of arr");
    for(i=0; i<5; i++)
    {
      scanf("%d",&arr[i]);        
    }
    m = max(arr ,5);
    printf(" the largest element is %d",m);
    return 0;
}
