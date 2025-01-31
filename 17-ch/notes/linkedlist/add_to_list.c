#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;         // data stored in the node
  struct node *next; // pointer to the next node
};

struct node *add_to_list(struct node *list, int n) {
  struct node *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in add_to_list\n");
    exit(EXIT_FAILURE);
  }

  new_node->value = n;
  new_node->next = list;
  return new_node;
}

// pointer to pointer
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
