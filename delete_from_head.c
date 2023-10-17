#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;

} node;
node *head;

void delete_from_head()
{
    node *deleteHead = head;
    head= head->next;
    free(deleteHead);
}

int main()
{
    head = malloc(sizeof(node));
    node *node1 = malloc(sizeof(node));
    node *node2 = malloc(sizeof(node));
    node *tail = malloc(sizeof(node));

    head->next = node1;
    node1->next = node2;
    node2->next = tail;
    tail->next = NULL;

    head->value = 10;
    node1->value = 20;
    node2->value = 30;
    tail->value = 40;



    delete_from_head();

    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }

    return 0;
}
