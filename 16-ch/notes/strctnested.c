
#include <stdio.h>
#include <string.h>
#define FIRST_NAME_LEN 15
#define LAST_NAME_LEN 15

struct person_name {
  char first[FIRST_NAME_LEN + 1];
  char middle_initial;
  char last[LAST_NAME_LEN + 1];
};

struct student {
  struct person_name name;
  int id, age;
  char sex;
} student1, student2;

int main(void) {
  strcpy(student1.name.first, "Fred");
  printf("%s\n", student1.name.first);
}
