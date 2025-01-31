// Enter a 12-hour time: 9:11 PM
// Equivalent 24-hour time: 21:11
#include <ctype.h>
#include <stdio.h>

int main() {

  int hh, mm;
  char ch;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d", &hh, &mm);

  while ((ch = getchar()) == ' ')
    ;
  ;
  ch = toupper(ch);
  switch (ch) {
  case 'P':
    if (hh != 12) {
      hh += 12;
    }
    break;
  case 'A':
    if (hh == 12) {
      hh = 0;
    }
    break;
  default:
    printf("Invalid entry: ");
    putchar(ch);
    putchar('\n');

    return 1;
  }
  if (hh > 23 || mm > 59) {
    printf("Invalid time\n");
  } else {
    printf("Equivalent 24-hour time: %d:%.2d\n", hh, mm);
  }
  return 0;
}
