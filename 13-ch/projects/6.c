// Improve the planet.c program of Section 13.7 by having it ignore case when
// comparing command-line arguments with strings in the planets array

// Checks Planet names
#include <ctype.h>
#include <stdio.h>

#define NUM_PLANETS 9

int nocaseStrcmp(const char *str1, const char *str2);

int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};

  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      // write my own strcasecmp???
      // if (strcasecmp(argv[i], planets[j]) == 0) {
      if (nocaseStrcmp(argv[i], planets[j]) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }
  return 0;
}
int nocaseStrcmp(const char *str1, const char *str2) {
  int i;
  for (i = 0; str1[i] || str2[i]; i++) {
    if (tolower(str1[i]) != tolower(str2[i]))
      return tolower(str1[i]) - tolower(str2[i]);
  }
  return 0;
}
