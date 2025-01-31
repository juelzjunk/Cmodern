// Modidy inventory.c so that p (print) operation displays the parts sorted by
// part number.

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

void quicksort(struct part a[], int low, int high);
int split(struct part a[], int low, int high);
// int compareByNum(const void *a, const void *b) {
//   struct part *partA = (struct part *)a;
//   struct part *partB = (struct part *)b;
//
//   return partA->number - partB->number; // Sort by age in ascending order
// }

int main(void) {
  struct part inventory[MAX_PARTS] = {
      {528, "SERVER 1", 1}, {914, "SERVER 2", 2}, {422, "SERVER 3", 3},
      {224, "SERVER 4", 4}, {100, "SERVER 5", 5}, {1000, "SERVER 6", 6},
  };

  // int n = sizeof(inventory) / sizeof(inventory[0]);
  // qsort(inventory, n, sizeof(struct part), compareByNum);

  quicksort(inventory, 0, 6);
  printf("Part number     Part Name       Quantity on Hand\n");
  for (int i = 0; i < 6; i++)
    printf("%7d     %-25s%1d\n", inventory[i].number, inventory[i].name,
           inventory[i].on_hand);
}
void quicksort(struct part a[], int low, int high) {
  int middle;

  if (low >= high)
    return;
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int split(struct part a[], int low, int high) {
  int part_element = a[low].number;

  for (;;) {
    while (low < high && part_element <= a[high].number)
      high--;
    if (low >= high)
      break;
    a[low++].number = a[high].number;

    while (low < high && a[low].number <= part_element)
      low++;
    if (low >= high)
      break;
    a[high--].number = a[low].number;
  }
  a[high].number = part_element;
  return high;
}
