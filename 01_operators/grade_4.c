#include<stdio.h>
  int main()
    {
        int a , b , c , d , e ;
        float Total;
        printf("enter your five subject number ");
        scanf("%d %d %d %d %d ", &a , &b , &c ,  &d , &e  );
        Total= (a+b+c+d+e)/5;
        printf("ypur aggrigate is : %f",Total);

        return 0;
    }