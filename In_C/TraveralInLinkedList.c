#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

void TraversalLinkedList(struct Node *pt)
{
    while (pt != NULL)
    {
        printf("ELEMENT:%d \n", pt->value);
        printf("ADDRESS:%p \n", pt);
        printf("ADDRESS OF NEXT MEMBER:%p \n", pt->next);
        printf("\n");
        pt = pt->next;
    }
}

int main()
{
    struct Node *head, *second, *third, *fourth;

    // Memory for each node is allocated in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Values being assigned to each member
    head->value = 9;
    second->value = 10;
    third->value = 9;
    fourth->value = 10;

    // Each member being linked to each other
    head->next = second;
    second->next = fourth;
    fourth->next = third;

    // Last member is assigned Null so as to show that the linking of linked list is ended.
    third->next = NULL;

    // Calling a function to traverse in the linked list and print them.
    TraversalLinkedList(head);

    return 0;
}
