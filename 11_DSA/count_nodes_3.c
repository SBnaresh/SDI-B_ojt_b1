#include<stdio.h>
#include<stdlib.h>
   struct node
   {
    int data;
    struct node *next;
    };
    struct node *newmem,*head;
    void main()
    {
        int i=1;
            int count;
            int pos=5;
            printf("enter desire position");
            scanf("%d",&pos);
        newmem=(struct node*)malloc(sizeof(struct node));
        if(newmem!=NULL)
        {   
        if(i=0;i=i<pos;i++)
            head = newmem;
            printf("enter data");
            scanf("%d",&head->data);
            
            printf("data is %d\n",head->data);
        }
        head->next=NULL;
    }
   