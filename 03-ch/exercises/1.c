// What output do the following calls of printf do?
// (a) printf("%6d,%4d", 86, 1040);
// (b) printf("%12.5e", 30.253);
// (c) printf("%.4f", 83.162);
// (d) printf("%-6.2g", .0000009979);
#include <stdio.h>

int main() {
  printf("%6d,%4d", 86, 1040);
  //"    86,1040"
  printf("\n\n");
  printf("%12.5e", 30.253);
  //" 3.02530e+01"
  printf("\n\n");
  printf("%.4f", 83.162);
  // 83.1620
  printf("\n\n");
  printf("%-6.2g", .0000009979);
  // 1e-06
  printf("\n\n");
}
