/*
Write a program that prompts the user to enter a number n,
then prints all even squares between 1 and n.
For example, if the user enters 100,
the program should print the follow-ing:
4
16
36
64
100
*/
#include <stdio.h>

int main() {
  int n, s, i;
  printf("Enter a number: ");
  scanf("%d", &n);
  // print all even squares between 1 and n

  for (i = 2; i * i <= n; ++i)
    if (i % 2 != 0) {
      continue;
    } else {
      printf("%d\n", i * i);
    }
}
