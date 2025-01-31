// Suppose we want a macro that expands into a string containing the current
// line number and file name.
//       const char *str = LINE_FILE;
//  and have it expand into
//      const char *str = "Line 10 of file.c"
// where foo.c is the file conating the program and 10 is th eline on which the
// invocation of LINE_FILE appears.
// Warning: This exercise is for experts only. Be sure to read the Q&A section
// carefully before attempting!

#include <stdio.h>

#define stringize(x) #x
#define tostringize(x) stringize(x)

#define LINE_FILE ("Line " tostringize(__LINE__) " of " __FILE__)

int main(void) {

  const char *str = LINE_FILE;
  printf("%s\n", str);
}
