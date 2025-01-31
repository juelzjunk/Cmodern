#include <ctype.h>
float compute_GPA(char grades[], int n) {
  int i, total = 0;
  for (i = 0; i < n; i++) {
    switch (toupper(grades[i])) {
    case 'A':
      total += 4;
      break;
    case 'B':
      total += 3;
      break;
    case 'C':
      total += 2;
      break;
    case 'D':
      total += 1;
      break;
    case 'F':
      total += 0;
      break;
    default:
      break;
    }
  }
  return (float)total / n;
}
