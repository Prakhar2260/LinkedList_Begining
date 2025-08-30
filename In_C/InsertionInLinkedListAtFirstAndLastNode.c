#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int info;
  struct Node *next;
};

void insertionAtlastNode(int item, struct Node *ptr)
{
  struct Node *new1;
  new1 = (struct Node *)malloc(sizeof(struct Node));
  struct Node *pt = ptr;
  new1->info = item;

  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }

  ptr->next = new1;
  new1->next = NULL;

  while (pt != NULL)
  {
    printf("%d \n", pt->info);
    pt = pt->next;
  }
}

void insertionAtfirstNode(int item, struct Node *ptr)
{
  struct Node *new1;
  new1 = (struct Node *)malloc(sizeof(struct Node));

  new1->info = item;

  new1->next = ptr;
  ptr = new1;

  while (ptr != NULL)
  {
    printf("%d \n", ptr->info);
    ptr = ptr->next;
  }
}

int main()
{
  struct Node *first, *second, *third, *fourth;

  first = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  first->info = 8;
  second->info = 9;
  third->info = 11;
  fourth->info = 12;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = NULL;

  struct Node *p = first;
  while (p != NULL)
  {
    printf("%d \n", p->info);
    p = p->next;
  }

  return 0;
}                                                                                  
