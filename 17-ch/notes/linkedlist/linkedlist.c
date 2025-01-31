#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;         // data stored in the node
  struct node *next; // pointer to the next node
};

int main(void) {

  struct node *first = NULL; // track beginning of list
  struct node *new_node;     // temp pointer to node until inserted into list
  new_node = malloc(sizeof(struct node)); // allocate memory for new node

  new_node->value = 10; // assignment same as (*new_node).value = 10;

  // Inserting Node at beginning of Linked List
  new_node->next = first;
  first = new_node;

  new_node = malloc(sizeof(struct node)); // allocate memory for new node
  printf("Enter value: ");
  scanf("%d", &new_node->value);
  new_node->next = first;
  first = new_node;

  return 0;
}
