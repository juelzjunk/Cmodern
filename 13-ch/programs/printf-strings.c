// %s
#include <stdio.h>
int main(void) {
  char *str = "Are we having fun yet?";
  char str2[20];
  char str3[20];
  // char str[] = "Are we having fun yet?";

  printf("%s\n", str);
  printf("%.6s\n", str); // Are we

  puts(str);
  puts("Are we having fun yet?");

  // printf("scanf: ");
  // scanf("%s", str3);
  // printf("scanf: %s\n", str3);

  printf("fgets: ");
  fgets(str2, sizeof(str2), stdin);
  // gets(str2);
  printf("fgets: ");
  puts(str2);
}
