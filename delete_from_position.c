#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;

} node;
node *head;

void delete_from_position(int p)
{
    node *temp = head;
    for (int i = 1; i <= p - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("invalid\n");
        }
    }
    if (temp->next == NULL)
    {
        printf("invalid\n");
    }
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);
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

    int p;

    printf("position: ");
    scanf("%d", &p);

    delete_from_position(p);

    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }

    return 0;
}
