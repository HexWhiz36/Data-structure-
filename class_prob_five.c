#include<stdio.h>
#include<stdlib.h>

typedef  struct Node
{
    int val;
    struct Node* prev;
    struct Node* next;

}node;

node* head;
node* tail;

void insertion(int p, int v)
{
    node* newNode= malloc(sizeof(node));
    newNode->val= v;
    newNode->prev= NULL;
    newNode->next=NULL;

    node* temp= head;
    for(int i=1;i<=p-1;i++)
    {
        temp=temp->next;
    }

    newNode->next= temp->next;
    temp->next= newNode;
    newNode->next->prev= newNode;
    newNode->prev= temp;
}

void print()
{
    node* temp= head;

    while(temp!=NULL)
    {
        printf("%d ",temp->val);
    
        temp= temp->next;
    }
}

void rev_print()
{
    node* temp= tail;

    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        
        temp= temp->prev;
    }
}
int main()
{
    head = malloc(sizeof(node));
    node* node1 = malloc(sizeof(node));
    tail = malloc(sizeof(node));

    head->prev= NULL;
    head->next= node1;
    node1->prev= head;
    node1->next= tail;
    tail->prev=  node1;
    tail->next= NULL;

   
    head->val= 10;

    
    node1->val= 20;

   
    tail->val= 30;

    int p,v;

    scanf("%d",&p);
    scanf("%d",&v);
    insertion(p,v);
    
    print();
    rev_print();
    return 0;
}
