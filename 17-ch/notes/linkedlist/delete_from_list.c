
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;         // data stored in the node
  struct node *next; // pointer to the next node
};

struct node *delete_from_list(struct node *list, int n) {
  struct node *cur, *prev;

  for (cur = list, prev = NULL; cur != NULL && cur->value != n;
       prev = cur, cur = cur->next)
    ;
  if (cur == NULL)
    return list;
  if (prev == NULL)
    list = list->next;
  else
    prev->next = cur->next;
  free(cur);
  return list;
}
