// Modify the addfrac.c program so that the user enters
// both fractions at the same time, separated by +,-,* or /:
//

#include <stdio.h>

int main() {
  int r = 1, a, b, gcd = 1, num1, denom1, num2, denom2, result_num,
      result_denom;
  char ch;

  printf("Enter two fractions separated by a +, -, *, or /: ");
  scanf("%d/%d ", &num1, &denom1);

  ch = getchar();

  scanf(" %d/%d", &num2, &denom2);

  if (denom1 == 0 || denom2 == 0) {
    printf("Invalid entry!!!\n");
    return 0;
  }
  switch (ch) {
  case '+':
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    break;
  case '-':
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
    break;
  case '*':
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
    break;
  case '/':
    result_num = num1 * denom2;
    result_denom = denom1 * num2;
    break;
  default:
    printf("Invalid operator!!!\n");
    return 0;
  }
  if (result_denom == 0) {
    printf("Undefined\n");
    return 0;
  } else {
    // add simplification

    if (result_denom > result_num) {
      a = result_denom, b = result_num;
    } else {
      a = result_num, b = result_denom;
    }

    for (; r > 0; a = b, b = r) {
      r = a % b;
    }
    if (r == 0) {
      gcd = a;
    }
    // Euclidean algorithm
    printf("The answer is %d/%d\n", result_num, result_denom);
    printf("Simplified is %d/%d\n", result_num / gcd, result_denom / gcd);
  }
  return 0;
}
