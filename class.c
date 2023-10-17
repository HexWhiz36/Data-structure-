#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int val;
    char ch;
    struct node* next;
}node;

node* head;
void insert_at_position(int p,int v,char ch)
{
    node* newNode = malloc(sizeof(node));
    newNode->val=v;
    newNode->ch=ch;


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
        printf("%d ",temp->val);
        printf("%c ",temp->ch);
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
    
    head->val=2;
    node1->val=3;
    node2->val= 4;
    tail->val= 5;

    head->ch= 'a';
    node1->ch='b';
    node2->ch='c';
    tail->ch='d';

    int p,v;
    char ch;
    printf("Positon: ");
    scanf("%d",&p);
    printf("value: ");
    scanf("%d",&v);
    printf("char value: ");
    scanf(" %c",&ch);
    
    insert_at_position(p,v,ch);

    print();
    
    return 0;
}