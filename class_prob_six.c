#include<stdio.h>
#include<stdlib.h>

typedef  struct Node
{
    char ch;
    struct Node* prev;
    struct Node* next;

}node;

node* head;
node* tail;

void insertion(char v)
{
    node* newNode= malloc(sizeof(node));
    newNode->ch= v;
    newNode->prev= NULL;
    newNode->next=NULL;

    newNode->next= head;
    head->prev= newNode;
    head= newNode;

}

void print()
{
    node* temp= head;

    while(temp!=NULL)
    {
        printf("%c ",temp->ch);
    
        temp= temp->next;
    }

    printf("\n\n");
}

void rev_print()
{
    node* temp= tail;

    while(temp!=NULL)
    {
        printf("%c ",temp->ch);
        
        temp= temp->prev;
    }
}
int main()
{
    head = malloc(sizeof(node));
    node* node1 = malloc(sizeof(node));
    node* node2 = malloc(sizeof(node));
    tail = malloc(sizeof(node));

    head->prev= NULL;
    head->next= node1;
    node1->prev= head;
    node1->next= node2;
    node2->prev= node1;
    node2->next=tail;
    tail->prev=  node2;
    tail->next= NULL;

   
    head->ch= 'A';
    node1->ch= 'B';
    node2->ch= 'C';
    tail->ch= 'D';

    char v;

    printf("value: ");
    scanf("%c",&v);
    insertion(v);
    
    print();
    rev_print();
    return 0;
}
