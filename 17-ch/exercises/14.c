// Modify the delete_from_list function (section 17.5) so that its first
// parameter has type struct node** (a pointer to a pointer to the first node in
// a list) and its return type is void. delete_from_list must modify its first
// argument to point to the list after the desired node has been deleted.
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

void mod_delete_from_list(struct node **list, int n) {
  struct node *delete;
  while (*list) {
    delete = *list;
    if (delete->value == n) {
      *list = delete->next;
      free(delete);
      return;
    }
    list = &(*list)->next;
  }
}
void add_to_list2(struct node **list, int n) {
  struct node *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in add_to_list2\n");
    exit(EXIT_FAILURE);
  }
  new_node->value = n;
  new_node->next = *list;
  *list = new_node;
}
int main(void) {

  struct node *first, *second;

  add_to_list2(&first, 10);
  add_to_list2(&first, 20);
  add_to_list2(&first, 20);
  add_to_list2(&first, 10);
  add_to_list2(&first, 20);
  second = first;
  while (first) {
    printf("%d ", first->value);
    first = first->next;
  }
  printf("\n");

  mod_delete_from_list(&second, 10);

  while (second) {
    printf("%d ", second->value);
    second = second->next;
  }
  printf("\n");
}
