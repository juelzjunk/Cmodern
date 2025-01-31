// Modify project 11 chapter 5 so that it uses arrays containing pointers to
// string instead of switch statements. For example, instead of using a switch
// statement to print the word for the first digit, use the digit as an index
// into an array that contains the strings "twenty","thirty", and so forth.

// Enter a two-digit number: 45
// You entered the number forty-five

const char *ONES[] = {
    "one",     "two",       "three",    "four",     "five",
    "six",     "seven",     "eight",    "nine",     "ten",
    "eleven",  "twelve",    "thriteen", "fourteen", "fifteen",
    "sixteen", "seventeen", "eighteen", "nineteen",
};
const char *TENS[] = {"twenty", "thirty",  "fourty", "fifty",
                      "sixty",  "seventy", "eighty", "ninety"};

#include <stdio.h>

int main() {
  int i, tens, ones;
  printf("Enter a two-digit number: ");
  scanf("%d", &i);
  if (i < 10 || i > 99) {
    printf("ERROR: two-digit numbers only\n");
    return 1;
  }
  tens = i / 10;
  ones = i % 10;
  printf("You entered the number ");
  if (tens == 1)
    puts(ONES[i - 1]);
  else
    printf("%s-%s\n", TENS[tens - 2], ONES[ones - 1]);
}
