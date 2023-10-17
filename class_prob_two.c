#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int val;
    struct node* next;
}node;
node* head;
void insert_at_head(int v)
{
    node* newNode = malloc(sizeof(node));
    newNode->val=v;

    newNode->next=head;
    head = newNode;
   
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
    
    head->val=11;
    node1->val=12;
    node2->val= 13;
    tail->val= 14;
    
    int v;
    
    printf("value: ");
    scanf("%d",&v);
    
    insert_at_head(v);

    print();


    return 0;
}