// Write the following function:
//      void remove_filename(char *url);
//  url points to a string containing a URL (Uniform Resource Locator) that ends
//  with a file name (such as "http://www.knking.com/index.html"). The function
//  should modify the string by removing the file name and the preceding slash.
//  ("http://www.knking.com")
//  Incorporate the "search for the end of a string" idiom into your function.
//  Hint: Have the function replace the last slash in the string by a null
//  character.
#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main(void) {
  char str[] = "http://www.knking.com/index.html/jaja/haha";
  puts(str);
  remove_filename(str);
  puts(str);
}
void remove_filename(char *url) {
  while (*url++)
    if (*url++ == '/' && *url != '/') {
      *--url = '\0';
      return;
    }
}
// void remove_filename(char *url) {
//
//   char *p = url;
//   while (*url) {
//     if (*url == '/')
//       p = url;
//     url++;
//   }
//   *p = '\0';
// }
