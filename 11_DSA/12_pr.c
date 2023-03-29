#include<stdio.h>
#include<stdlib.h>

 typedef struct node{
    int data;
    struct node *next ;
    struct node *prev;

 }Node;
 void ins (Node **head , int num)
 {
     Node *newnode;
     newnode=(Node *)malloc(sizeof(Node));
     newnode->data = num;
     newnode->next=NULL;
     newnode->prev =(*head);
     if((*head)!=NULL)
     (*head)->next = newnode;
     (*head )=newnode;
 }
 void insc_pos(Node* prev_node, int new_data)
 {
    if(prev_node == NULL)
      return ;
      Node* new_node=(Node*)malloc(sizeof(Node));
      new_node->data = new_data;
      new_node->next=prev_node->next;
      prev_node->next = new_node;
      new_node->prev = prev_node;
      if(new_node->next !=NULL)
        new_node->next->prev= new_node;

 }
 void disp(Node*head)
  {
    Node*last;
    while(head!=0)
    {
        printf("%d",head->data);
        last=head;
        head=head->prev;
    }
    printf("\n");
  }
  int main()
  {
    Node*start;
    start=NULL;
    ins(&start,2);
    ins(&start,6);
    ins(&start,9);
    insc_pos(start->prev->prev,3);
    disp(start);
    return 0;
  }