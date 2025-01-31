// Write the following function:
//
// int *find_largest(int a[], int n);
//
// When passed an array a of length n, the function will
// return a pointer to the array's largest element.
//
// return a pointer?????????

int *find_largest(int a[], int n) {
  int i = 0, *largest = &a[0];
  for (i = 1; i <= n; i++) {
    if (*largest < a[i])
      largest = &a[i];
  }
  return largest;
}
