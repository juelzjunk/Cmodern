// Write the following function:
//
//      void get_extension(const char *file_name, char *extension);
//
// file_name points to a string containing a file name. The function
// should store the extension on the file name in the string pointed
// to by extension.
// For example, if the file name is "memo.txt", the function will store "txt" in
// the string pointed to by extension. if the file name doesnt have an
// extension, the function should store an empty string (a single null
// character) in the string pointed to by extension.
// Keep the function simple as possibly by having it use the strlen and strcpy
// functions.
//
#include <stdio.h>
#include <string.h>

#define N 50

void get_extension(const char *file_name, char *extension) {
  for (int i = strlen(file_name); i >= 0; i--)
    if (file_name[i] == '.') {
      strcpy(extension, &file_name[++i]);
      return;
    }
  *extension = '\0';
  return;
}

int main(void) {
  char file_name[N] = "memo.txt", extension[N] = "\0";
  get_extension(file_name, extension);
  puts(extension);
}
