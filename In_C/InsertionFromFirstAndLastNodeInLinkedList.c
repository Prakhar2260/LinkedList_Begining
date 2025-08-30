#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int info;
  struct Node *next;
};

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

  printf("\n");

  struct Node *new1;
  struct Node *new2;

  new1 = (struct Node *)malloc(sizeof(struct Node));
  new2 = (struct Node *)malloc(sizeof(struct Node));

  new1->info = 50;
  new2->info = 100;

  new1->next = first;
  first = new1;

  struct Node *p1 = first;

  while (p1->next != NULL)
  {
    p1 = p1->next;
  }

  p1->next = new2;
  new2->next = NULL;

  struct Node *p2 = first;

  while (p2 != NULL)
  {
    printf("%d \n", p2->info);
    p2 = p2->next;
  }

  return 0;
}
