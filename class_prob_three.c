#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int val;
    struct node* next;
}node;

node* head;

void insert_at_tail(int v)
{
    node* newNode = malloc(sizeof(node));
    newNode->val=v;

    node* temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next=newNode;
    newNode->next=NULL;
}
void print()
{
    node* temp= head;
    while(temp!= NULL)
    {
        printf("%d ",temp->val);
        
        temp= temp->next;
    }
}

int main()
{
    head = malloc(sizeof(node));
    node* node1 = malloc(sizeof(node));
    node* node2 = malloc(sizeof(node));
    node* tail = malloc(sizeof(node));

    head->next= node1;
    node1->next= node2;
    node2->next= tail;
    tail->next= NULL;
    
    head->val=21;
    node1->val=22;
    node2->val= 23;
    tail->val= 24;
    print();
    int v;
    printf("value: ");
    scanf("%d",&v);


    insert_at_tail(v);
    print();


    return 0;
}