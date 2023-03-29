#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*next;
}Node;
void push(Node**head,int A)
{
    Node* newnode= malloc(sizeof(Node));
    newnode->data =A;
    newnode->next =*head;
    *head = newnode;

}
  void printList(Node* node)
  {
    while(node!= NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
    printf("\n");
  }
  void del(Node**head)
  {
    Node*prevnode;
    Node *temp;
    temp =*head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
    head=0;
    else 
    prevnode->next=0;
    free(temp);
  
  }
  int main()
  {
    Node*list =NULL;
    push(&list,5);
    push(&list,7);
    push(&list,6);
    push(&list,9);
    printList(list);
    del(&list);
    printList(list);
    return 0;
  }
    
  