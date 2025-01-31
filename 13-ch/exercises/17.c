// Write the following function:
//
//
//  bool test_extension(const char *file_name, char *extension);
//
// file_name points to a string containg a file name. the function should return
// true if the file's extension matches the string pointed to by extension,
// ignoring the case of letters.
// For example, the call test_extension("memo.txt", "TXT") would retun true.
// Incorporate the "search for the end of string" idiom into your function.
// Hint: Use the toupper function to convert the characters to upper-case before
// comparing them.
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool test_extension(const char *file_name, const char *extension);

int main(void) {
  printf("%d\n", test_extension("memo.tXt", "txT"));
  return 0;
}
bool test_extension(const char *file_name, const char *extension) {

  while (*file_name++ != '.')
    ;

  while (*file_name && *extension)
    if (toupper(*file_name++) != toupper(*extension++))
      return false;

  return true;
}
