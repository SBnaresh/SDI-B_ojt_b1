#include<stdio.h>
#include<stdlib.h>

 typedef struct node{
     int data ;  
     struct node* next;
 }Node;
 void push(Node**head,int A)
 {
    Node*newnode = malloc(sizeof(Node));
    newnode->data=A;
    newnode->next=*head;
    *head = newnode;
 }
 void printList(Node* node)
 {
    while(node!=node)
 {
    printf("%d",node->data);
    node=node->next;
 }
 printf("\n");
 }
   void len(Node** head)
   {
    int count=0;
    Node*temp;
    temp=*head;
    while(temp->next!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("%d\n",count);


   }
   int  main()
   {
    Node*list=NULL;
    push(&list,5);
    push(&list,7);
    push(&list,6);
    push(&list,9);
    printList(list);
    len(&list);
    return 0;
   }