// Write the following function:
//
// bool search(const int a[], int n, int key);
//
// a is an array to be searched, n is the number of elements in the array,
// and key is the search key. search should return true if key matches
// some element of a, and false if it doesnt.
// Use pointer arithmetic --notsubscripting-- to visit array elements.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 10

bool search(const int a[], int n, int key);

int main(int argc, char *argv[]) {
  int array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int key = 0;

  printf("Enter key: ");
  scanf("%d", &key);

  if (search(array, N, key))
    printf("KEY FOUND\n");
  else
    printf("KEY NOT FOUND\n");

  return EXIT_SUCCESS;
}
bool search(const int a[], int n, int key) {
  const int *pA;
  for (pA = a; pA < a + N; pA++) {
    if (*pA == key)
      return true;
  }
  return false;
}
