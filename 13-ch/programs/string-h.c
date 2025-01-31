#include <stdio.h>
#include <string.h>

#define N 25
const char string[] = "hello string.h, im bob";

int main(void) {
  char str1[N] = "0", str2[N] = "0";

  // strcpy
  // char *strcpy(char *s1, const char *s2);
  strcpy(str2, "abcd"); // str2 = abcd
  strcpy(str1, str2);   // str1 = abcd
  // printf("str1=%s\n", str1);
  // printf("str2=%s\n", str2);
  // strcpy(str1, strcpy(str2, string));
  // printf("str1=%s\n", str1);
  // printf("str2=%s\n", str2);

  // strncpy
  char str3[N] = "0";
  strncpy(str3, string, sizeof(str3));
  // printf("str3=%s\n", str3);
  strncpy(str3, string, sizeof(str3) - 1);
  str3[sizeof(str3) - 1] = '\0';
  // printf("str3=%s\n", str3);

  // strlen
  // size_t strlen(const char *s);
  // int len = strlen(string); // length of string - '\0'
  // printf("strlen(string): %d\n", len);

  // printf("%ld\n", sizeof(string));

  // strcat
  // char *strcat(char *s1, const char *s2);
  strcpy(str1, "abcd"); // str1 = abcd
  strcat(str1, "EFGH"); // str1 = abcdEFGH
  strcat(str3, strcat(str1, "ijkl"));
  // puts(str3);
  // printf("%ld\n", sizeof(str3));

  // strncat
  char str4[6] = "abc";
  strncat(str4, "123456789", sizeof(str4) - strlen(str4) - 1);
  // puts(str4);

  // strcmp
  // int strcmp(const char *s1, const char *s2);
  char str8[N] = "abcd", str7[N] = "abcd";
  if (strcmp(str8, str7) < 0)
    printf("str8 is < than str7\n");
  else
    printf("no\n");
}
