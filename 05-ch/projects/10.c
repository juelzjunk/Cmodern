#include <stdio.h>

int main() {
  int grade, letter;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);
  grade = grade / 10;
  switch (grade) {
  case 10:
  case 9:
    printf("Letter grade: A\n");
    break;
  case 8:
    printf("Letter grade: B\n");
    break;
  case 7:
    printf("Letter grade: C\n");
    break;
  case 6:
    printf("Letter grade: D\n");
    break;
  default:
    printf("Letter grade: F\n");
    break;
  }
}
