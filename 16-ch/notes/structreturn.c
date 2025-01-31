#include <stdio.h>
#include <string.h>

#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};
void print_part(struct part p);
struct part build_part(int number, const char *name, int on_hand);

int main() {
  struct part part1 = {.number = 123, .name = "Power tool", .on_hand = 8};
  print_part(part1);
  puts("");
  struct part part2 = build_part(345, "JAJAHAHA", 11);
  print_part(part2);
}
void print_part(struct part p) {
  printf("Part number: %d\n", p.number);
  printf("Part name: %s\n", p.name);
  printf("Quantity on hand: %d\n", p.on_hand);
}

struct part build_part(int number, const char *name, int on_hand) {
  struct part p;

  p.number = number;
  strcpy(p.name, name);
  p.on_hand = on_hand;
  return p;
}
