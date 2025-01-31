#include <stdio.h>
#define NAME_LEN 25
int main() {
  struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
  };

  struct part part1 = {528, "Disk Drive", 10};
  struct part part2;

  part2 = part1;
  printf("Part2 name: %s\n", part2.name);
}
