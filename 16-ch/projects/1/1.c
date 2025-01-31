// Write a program that asks the user to enter an international dialing code and
// then looks it up in the country_codes array (Section 16.3). If it finds the
// code, the program should display the name of the corresponding country; if
// not, the program should print an error message.
#include <stdio.h>

struct dialing_code {
  char *country;
  int code;
};

const struct dialing_code country_codes[] = {
    {"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55}};

int main(void) {
  int i, dialcode = 0;
  printf("Enter an international dialing code: ");
  if (scanf("%d", &dialcode) != 1) {
    fprintf(stderr, "ERROR invid input\n");
    return 1;
  }

  int n = sizeof(country_codes) / sizeof(country_codes[0]);
  for (i = 0; i < n; i++) {
    if (country_codes[i].code == dialcode) {
      printf("%s\n", country_codes[i].country);
      return 0;
    }
  }
  fprintf(stderr, "stderr -- code not found\n");
  return 1;
}
