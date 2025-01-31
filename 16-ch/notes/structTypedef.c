
#include <stdio.h>
#define NAME_LEN 25
int main() {

  typedef struct {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
  } Part;

  Part part1 = {528, "Disk Drive", 10};
  printf("Part name: %s\n", part1.name);
}
