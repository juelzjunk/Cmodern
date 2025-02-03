// Write the following function:
//  struct node *find_last(struct node *list, int n);
// The list parameter points to a linked list. The function should return a
// pointer to the last node that contains n; it should return NULL if n doesnt
// appear in the list. Assume that the node structire is the one defined in
// Section 17.5.
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *find_last(struct node *list, int n) {

  struct node *temp = NULL;
  while (list != NULL) {
    if (list->value == n)
      temp = list;
    list = list->next;
  }
  return temp;
}
