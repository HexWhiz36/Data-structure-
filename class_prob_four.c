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
    }
    

    newNode->next= temp->next;
    temp->next = newNode;
}

void delete(int x)
{
    node *temp = head;
    while(temp!=NULL)
    {
        if(temp->next->value==x) 
        {
            break;
        }
        temp= temp->next;
    } 
    
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);


}

void print()
{
     node* temp= head;
    while(temp!= NULL)
    {
        printf("%d ",temp->value);
        temp= temp->next;
    }
    printf("\n\n");
}


int main()
{
    head = malloc(sizeof(node));
    node* node1 = malloc(sizeof(node));
    node* node2 = malloc(sizeof(node));
    node* node3 = malloc(sizeof(node));
    node* tail = malloc(sizeof(node));

    head->next= node1;
    node1->next= node2;
    node2->next= node3;
    node3->next= tail;
    tail->next= NULL;
    
    head->value=4;
    node1->value=5;
    node2->value= 6;
    node3->value= 7;
    tail->value= 8;

    print();

    int p,v;
    printf("Positon: ");
    scanf("%d",&p);
    printf("value: ");
    scanf("%d",&v);

   
    
    insert_at_position(p,v);

    printf("After insertion: \n");
    print();

    delete(6);
    delete(7);

    printf("After deletion: \n");
    print();
    
    return 0;
}
