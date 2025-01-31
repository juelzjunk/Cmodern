// Modify the delete_from_list function so that it uses only one pointer
// variable instead of two (cur and prev).

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;         // data stored in the node
  struct node *next; // pointer to the next node
};

// struct node *delete_from_list(struct node *list, int n) {
//   struct node *cur, *prev;
//
//   for (cur = list, prev = NULL; cur != NULL && cur->value != n;
//        prev = cur, cur = cur->next)
//     ;
//   if (cur == NULL)
//     return list;
//   if (prev == NULL)
//     list = list->next;
//   else
//     prev->next = cur->next;
//   free(cur);
//   return list;
// }
struct node *delete_from_list(struct node **list, int n) {
  struct node *delete = *list;
  while (delete) {
    if (delete->value == n) {
      *list = delete->next;
      free(delete);
      break;
    }
    list = &delete->next;
    delete = delete->next;
  }
  return *list;
}

int main(void) {
  struct node *first = NULL, *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: Malloc failed.\n");
    return 1;
  }
  new_node->value = 10;
  new_node->next = first;
  first = new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: Malloc failed.\n");
    return 1;
  }
  new_node->value = 20;
  new_node->next = first;
  first = new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: Malloc failed.\n");
    return 1;
  }
  new_node->value = 30;
  new_node->next = first;
  first = new_node;

  for (struct node *p = first; p != NULL; p = p->next) {
    printf("%d ", p->value);
  }
  printf("\n");

  delete_from_list(&first, 20);

  for (struct node *p = first; p != NULL; p = p->next) {
    printf("%d ", p->value);
  }
  printf("\n");
}
