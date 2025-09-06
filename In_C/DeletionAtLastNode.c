#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

void DeleteLastNode(struct node *ptr)
{
    struct node *temp0 = ptr;
    struct node *temp1 = ptr->next;

    while (temp1->next != NULL)
    {
        temp0 = temp0->next;
        temp1 = temp1->next;
    }

    temp0->next = NULL;
    free(temp1);

    while (ptr != NULL)
    {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *first, *second, *third, *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->value = 1;
    first->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = fourth;
    fourth->value = 4;
    fourth->next = NULL;

    printf("ENTERED LINKED LIST IS AS FOLLOWS:\n");
    struct node *p = first;

    while (p != NULL)
    {
        printf("%d ", p->value);
        p = p->next;
    }

    printf("\n");

    // DELETING THE LAST NODE
    printf("LINKED LIST AFTER DELETION OF FIRST NODE IS AS FOLLOWS:\n");
    DeleteLastNode(first);

    return 0;
}
