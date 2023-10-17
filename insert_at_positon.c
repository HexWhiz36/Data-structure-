#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int value;
    struct Node* next;
    
}node;
node* head;

void insert_at_position(int p,int v)
{
    node* newNode = malloc(sizeof(node));
    newNode->value=v;

    node* temp = head;
    for(int i=1;i<=p-1;i++)
    {
        temp= temp->next;
        if(temp==NULL)
        {
            printf("invalid\n");
        }
    }
    

    newNode->next= temp->next;
    temp->next = newNode;
}

void print()
{
     node* temp= head;
    while(temp!= NULL)
    {
        printf("%d ",temp->value);
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
    
    head->value=10;
    node1->value=20;
    node2->value= 30;
    tail->value= 40;

    print();

    int p,v;
    printf("Positon: ");
    scanf("%d",&p);
    printf("value: ");
    scanf("%d",&v);

   
    
    insert_at_position(p,v);
    print();

    
    return 0;
}
