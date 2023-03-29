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
  void del(Node**head,int pos)
  {
    int i=1;
    Node*temp;
    Node*prev;
    prev=*head;
    while(i<pos-1)
    {
        prev=prev->next;
        i++;
    }
    temp=prev->next;
    prev->next=temp->next;
    free(temp);
  }
  int main()
  {
    Node*list =NULL;
    push(&list,5);
    push(&list,7);
    push(&list,3);
    push(&list,1);
    printList(list);
    del(&list,3);
    printList(list);
    return 0;
  }