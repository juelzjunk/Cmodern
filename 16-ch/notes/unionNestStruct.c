// Using unions to save space
#include <stdio.h>
#include <string.h>

#define TITLE_LEN 20
#define AUTHOR_LEN 20
#define DESIGN_LEN 20

int main(void) {

  struct catalog_item {
    int stock_number;
    double price;
    int item_type;
    char title[TITLE_LEN + 1];
    char author[AUTHOR_LEN + 1];
    int num_pages;
    char design[DESIGN_LEN + 1];
    int colors;
    int sizes;
  };
  // Although this structure is perfectly usuable, it wastes space
  // since pnly part of the info in struct is common to all items.
  struct catalog_item1 {
    int stock_number;
    double price;
    int item_type;
    union {
      struct {
        char title[TITLE_LEN + 1];
        char author[AUTHOR_LEN + 1];
        int num_pages;
      } book;
      struct {
        char design[DESIGN_LEN + 1];
      } mug;
      struct {
        char design[DESIGN_LEN + 1];
        int colors;
        int sizes;
      } shirt;
    } item;
  };
  struct catalog_item1 c;
  // mug and shirt havce same design
  strncpy(c.item.mug.design, "Cats", DESIGN_LEN);
  printf("%s\n", c.item.shirt.design);
}
