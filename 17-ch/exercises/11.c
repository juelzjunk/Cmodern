// Write the following function:
//  int count_occurrences(struct node *list, int n);
// The list parameter points to a linked list; the function should return the
// number of times that n appears in this list. Assume that the node structure
// is the one defined in Section 17.5.

#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

int count_occurrences(struct node *list, int n) {
  int count = 0;

  while (list != NULL) {
    if (list->value == n)
      count++;
    list = list->next;
  }
  return count;
}
