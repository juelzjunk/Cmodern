// The following function is supposed to insert a new node into its proper place
// in an ordered list, returning a pointer to the first node in the modified
// list. Unfortunately, the function doesnt work correctly in all cases.
// Explain what's wrong with it and show how to fix it.
//
// struct node *insert_into_ordered_list(struct node *list,
//                                       struct node *new_node) {
//   struct node *cur = list, *prev = NULL;
//   while (cur->value <= new_node->value) {
//     prev = cur;
//     cur = cur->next;
//   }
//   prev->next = new_node;
//   new_node->next = cur;
//   return list;
// }

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *corrected_insert_into_ordered_list(struct node *list,
                                                struct node *new_node) {
  if (new_node == NULL)
    return list;
  if (list == NULL)
    return new_node;

  struct node *cur = list, *prev = NULL;
  while (cur != NULL && cur->value <= new_node->value) {
    prev = cur;
    cur = cur->next;
  }
  if (prev == NULL) {
    new_node->next = list;
  } else
    prev->next = new_node;
  new_node->next = cur;

  return list;
}
