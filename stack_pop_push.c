#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int value;
    struct Node* next;
    struct Node* prev;
}node;

node* top = NULL;
node* bottom = NULL;

void push(int value)
{
    node* NewNode= malloc(sizeof(node));
    NewNode->value= value;
    NewNode->next= NULL;
    NewNode->prev=NULL;

    if(bottom==NULL)
    {
        top= NewNode;
        bottom=NewNode;
        return;
    }
    top->next= NewNode;
    NewNode->prev= top; 
    top= NewNode;
}
void pop()
{
    node* deleteNode= top;
    top=top->prev;
    free(deleteNode);
    top->next= NULL;
}

void print()
{
    node* temp= top;
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp= temp->prev;
    }
}



int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    print();

    
    return 0;
}