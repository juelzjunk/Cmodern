#include <stdio.h>
int main() {
  int i, tens, ones;
  printf("Enter a two-digit number:");
  scanf("%d", &i);
  tens = i / 10;
  ones = i % 10;

  switch (tens) {
  case 1:
    if (ones == 1) {
      printf("You entered the number eleven\n");
      ones = 0;
    } else if (ones == 2) {
      printf("You entered the number twelve\n");
      ones = 0;
    } else if (ones == 3) {
      printf("You entered the number thirteen\n");
      ones = 0;
    } else if (ones == 4) {
      printf("You entered the number fourteen\n");
      ones = 0;
    } else if (ones == 5) {
      printf("You entered the number fifteen\n");
      ones = 0;
    } else if (ones == 6) {
      printf("You entered the number sixteen\n");
      ones = 0;
    } else if (ones == 7) {
      printf("You entered the number seventeen\n");
      ones = 0;
    } else if (ones == 8) {
      printf("You entered the number eighteen\n");
      ones = 0;
    } else if (ones == 9) {
      printf("You entered the number nineteen\n");
      ones = 0;
    }
    break;

  case 2:
    printf("You entered the number twenty-");
    break;
  case 3:
    printf("You entered the number thirty-");
    break;
  case 4:
    printf("You entered the number forty-");
    break;
  case 5:
    printf("You entered the number fifty-");
    break;
  case 6:
    printf("You entered the number sixty-");
    break;
  case 7:
    printf("You entered the number seventy-");
    break;
  case 8:
    printf("You entered the number eighty-");
    break;
  case 9:
    printf("You entered the number ninety-");
    break;
  }

  switch (ones) {
  case 0:
    printf("\n");
    break;
  case 1:
    printf("one\n");
    break;
  case 2:
    printf("two\n");
    break;
  case 3:
    printf("three\n");
    break;
  case 4:
    printf("four\n");
    break;
  case 5:
    printf("five\n");
    break;
  case 6:
    printf("six\n");
    break;
  case 7:
    printf("seven\n");
    break;
  case 8:
    printf("eight\n");
    break;
  case 9:
    printf("nine\n");
    break;
  }
}
