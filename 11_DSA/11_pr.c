#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node*prev;
}Node;

void ins(Node **head,int num)
{
    Node *newnode;
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=(*head);
    if((*head)!=NULL)
        (*head)->next = newnode;
        (*head)=newnode;
       
}
void disp(Node*head)
{
    Node* last;
    while(head!=0)
    {
        printf("%d",head->data);
        last=head;
        head=head->prev;
    }
    printf("\n");
    while(last!=NULL)
    {
        printf("%d",last->data);
        last=last->next;
    }
    printf("\n");
}
   int main()
   {
    Node *start;
    start=NULL;
    ins(&start,2);
     ins(&start,6);
     ins(&start,9);
     ins(&start,3);
    disp(start);
    return 0;
   }
   
   
   
   
    