int largest(int a[], int n) {
  int i, high;
  for (i = 0, high = 0; i < n; i++) {
    if (high < a[i])
      high = a[i];
  }
  return high;
}

int average(int a[], int n) {
  int i, average = 0;
  for (i = 0; i < n; i++) {
    average += a[i];
  }
  return average /= i;
}

int positives(int a[], int n) {
  int positives = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      positives++;
    }
  }
  return positives;
}
