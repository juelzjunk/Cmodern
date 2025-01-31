// Write the following function:
//  int *create_array(int n, int initial_value);
// The function should return a pointer to a dynamically allocated int array
// with n members, each of which is initialized to initial_value. The return
// value should be NULL if the array cant be allocated.

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value) {

  int *array;

  if (n < 0) {
    printf("Error: invalid array size\n");
    return NULL;
  }

  array = malloc(sizeof(int) * n);
  if (array == NULL) {
    printf("Error: malloc failed\n");
    return NULL;
  }
  for (int i = 0; i < n; i++)
    array[i] = initial_value;
  return array;
}
