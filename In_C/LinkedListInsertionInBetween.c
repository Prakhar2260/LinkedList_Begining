#include <stdio.h>
#include <stdlib.h>

struct node
{
  int item;
  struct node *next;
};

void InsertionInBetween(struct node *pt0, int i)
{
  struct node *pt1 = pt0->next;
  struct node *new1;
  struct node *p = pt0;
  ;

  new1 = (struct node *)malloc(sizeof(struct node));
  new1->item = 5;

  if (i < 3)
  {
    while (i > 0)
    {
      pt0 = pt0->next;
      pt1 = pt1->next;
      i--;
    }

    new1->next = pt0->next;
    pt0->next = new1;

    while (p != NULL)
    {
      printf("ELEMENT:%d\n", p->item);
      p = p->next;
    }
    printf("\n");
  }

  else
  {
    while (pt0->next != NULL)
    {
      pt0 = pt0->next;
    }

    pt0->next = new1;
    new1->next = NULL;

    while (p != NULL)
    {
      printf("ELEMENT:%d\n", p->item);
      p = p->next;
    }
    printf("\n");
  }
}

int main()
{
  struct node *first, *second, *third, *fourth;
  int location;

  first = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  first->item = 1;
  second->item = 2;
  third->item = 3;
  fourth->item = 4;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = NULL;

  struct node *p = first;

  while (p != NULL)
  {
    printf("ELEMENT:%d\n", p->item);
    p = p->next;
  }

  printf("\nLocation should be between 0 to 3\n");

  scanf("%d", &location);
  InsertionInBetween(first, location);

  return 0;
}
