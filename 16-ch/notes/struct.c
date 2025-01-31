#include <stdio.h>
#define NAME_LEN 25
// // Declaring Structure Variables
// struct {
//   int number;
//   char name[NAME_LEN + 1];
//   int on_hand;
// } part1, part2;
// // structure has a separate namespace
// struct {
//   char name[NAME_LEN + 1]; // diff from part struct
//   int number;              // diff from part struct
//   char sex;
// } employee1, employee2;
//
// // Initializing Structure Variables
// struct {
//   int number;
//   char name[NAME_LEN + 1];
//   int on_hand;
// } part1 = {528, "Disk Drive", 10}, partt2 = {914, "Printer Cable", 5};

// Designated Initalizers

int main() {
  struct {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
  } part1 = {.name = "Disk Drive", .number = 528, .on_hand = 10},
    part2 = {.number = 914, "Printer Cable", .on_hand = 10},
    part3 = {.number = 14, "Laptop", 44};

  printf("Part number: %d\n", part1.number);
  printf("Part2 name: %s\n\n", part2.name);

  part1.number = 258;
  printf("Part number: %d\n\n", part1.number);

  printf("Enter on_hand for part3: ");
  scanf("%d", &part3.on_hand);
  printf("Part3 on_hand: %d\n\n", part3.on_hand);
}
