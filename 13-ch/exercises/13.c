// Write the following function:
//
// void build_index_url(const char *domain, char *index_url);
//
// domain points to a string containing an Internet domain, such as "knking.com"
// The function should ass "http://www." to the beginning of this string and
// "/index.html" to the edn of the string, storing the result in the string
// pointed to by index_url. http://www.knking.com/index.html You may assume that
// index_url points to a variable that is long enough to hold the resulting
// string. Keep the function as simple as possible by having it use the strcat
// and strcpy functions.
#include <stdio.h>
#include <string.h>

#define N 100

void build_index_url(const char *domain, char *index_url) {
  const char *p1 = "http://www.";
  const char *p2 = "/index.html";

  // strcpy(index_url, p1);     // index_url= http://www.
  // strcat(index_url, domain); // index_url = http://www.domain
  // strcat(index_url, p2);     // index_url= http://www.domain/index.html

  strcat(strcat(strcpy(index_url, p1), domain), p2);
}

int main(void) {
  char domain[] = "knking.com", index_url[N] = "\0";
  build_index_url(domain, index_url);
  puts(index_url);
}
