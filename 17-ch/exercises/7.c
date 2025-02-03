// The following loop is supposed to delete all nodes from a linked list and
// release the memory that they occupy. Unfortunatley, th eloop is incorrect.
// Explain what's wrong with it and show how to fix the bug.
// for (struct node *p = first; p != NULL; p = p->next)
//      free(p);

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;         // data stored in the node
  struct node *next; // pointer to the next node
};

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

  for (struct node *n = first; n != NULL; n = n->next) {
    printf("%d ", n->value);
  }
  printf("\n");
  // for (struct node *p = first; p != NULL; p = p->next) {
  struct node *p, *temp;
  p = first;
  while (p != NULL) {
    temp = p;
    p = p->next;
    free(temp);
  }

  // for (struct node *n = first; n != NULL; n = n->next) {
  //   printf("%d ", n->value);
  // }
  printf("passed\n");
}
