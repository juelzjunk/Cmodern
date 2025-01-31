// Write a program that asks the user to enter a series of integers ( which it
// stores in an array), then sorts the integers by calling the function
// selection_sort. When given an array with n elements, selection_sort must do
// the following:
// 1. Search the array to find the largest element, then move it to the last
// position in the array.
// 2. Call itself recursively to sort the first n-1 elements of the array.
#include <stdio.h>

#define N 5

void selection_sort(int a[], int n);

int main(void) {

  int i, array[N] = {5, 8, 9, 2, 6};

  // printf("Enter %d numbers: ", N );
  // largest for (i = 0; i < N ; i++) {
  //   scanf("%d", &array[i]);
  // }

  printf("before: ");
  for (i = 0; i < N; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  selection_sort(array, N);

  printf("\n");
  printf("after: ");
  for (i = 0; i < N; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void selection_sort(int a[], int n) {
  while (n > 0) {
    int i, largest, position;
    for (i = 0, largest = 0; i < n; i++) {
      if (largest < a[i]) {
        largest = a[i];
        position = i;
      }
    }
    a[position] = a[n - 1];
    a[n - 1] = largest;
    n--;
    selection_sort(a, n);
  }
}
