#include <stdio.h>

// int main() {
//   int n, f;
//   int j, i;
//   float a;
//   printf("Enter value for n: ");
//   scanf("%d", &n);
//
//   // e = 1 + 1/1! + 1/2! + 1/3! +...
//   float e = 1 + (1.0 / (1 * 1)) + (1.0 / (2 * 1)) + (1.0 / (3 * 2 * 1)) +
//             (1.0 / (4 * 3 * 2 * 1)) + (1.0 / (5 * 4 * 3 * 2 * 1));
//
//   // n = n * (n - 1) * (n - 2) * (n - 3);
//   // printf("n = %d\n", n);
//   for (f = 0; f <= n; ++f) {
//     if (f == 0)
//       a += 1;
//     for (j = 0; j < f; j++) {
//       if (j == 0) {
//         i = f;
//       } else {
//         i *= (f - j);
//       }
//     }
//     a += 1.0 / i;
//   }
//   printf("n = %d\n", n);
//   printf("e = %f\n", e);
//   printf("j = %d\n", j);
//   printf("i = %d\n", i);
//   printf("a = %f\n", a);
// }
int main() {
  int i, n, d;
  float e;

  printf("Enter value for n: ");
  scanf("%d", &n);

  for (i = 1, d = 1, e = 1.0f; i <= n; i++) {
    e += 1.0f / (d *= i);
  }
  printf("value for e: %f\n ", e);
}
