#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node **head_ref,int data)
{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;
    ptr1->data =data;
    ptr1->next= *head_ref;
    if(*head_ref !=NULL)
    {
        while(temp->next!=*head_ref)
        temp = temp->next;
        temp->next=ptr1;
    }
    else
    {
        ptr1->next=ptr1;
        *head_ref=ptr1;
    }
}
void del(struct Node **tail)
{
    struct Node *temp;
    temp=(*tail)->next;
    if((*tail)==NULL)
        return;
    else
    {
        while(temp->next!=*tail)
        temp=temp->next;
        temp->next=(*tail)->next;
    }
    temp=(*tail);
    (*tail)=temp->next;
    free(temp);
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    if(head != NULL)
    {
        do{
            printf("%d [%p]->%p\n",temp->data,temp,temp->next);
            temp = temp->next;
        }while(temp!=head);
    }
    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    push(&head,12);
     push(&head,56);
      push(&head,2);
       push(&head,11);
       printf("%p\n",head);
       printList(head);
       del(&head);
       printList(head);
       return 0;
}