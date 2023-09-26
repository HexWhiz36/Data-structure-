#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int value;
    struct Node* next;
    struct Node* prev;
}node;

node* front = NULL;
node* rear = NULL;


void enqueue(int value)
{
    node* NewNode= malloc(sizeof(node));
    NewNode->value= value;
    NewNode->next= NULL;
    NewNode->prev=NULL;

    if(front==NULL)
    {
        front= NewNode;
        rear=NewNode;
        return;
    }
    rear->next= NewNode;
    NewNode->prev= rear; 
    rear= NewNode;
}


void dequeue()
{
    node* deleteNode= front;
    front=front->next;
    free(deleteNode);
    front->prev= NULL;
}



void print()
{
    node* temp= front;
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp= temp->next;
    }
}



int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    print();

    
    return 0;
}