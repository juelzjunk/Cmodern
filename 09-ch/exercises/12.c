// write the following function:
// double inner_product(double a[],double b[],int n);
// the function should return a[0]*b[0]+a[1]*b[1]+....+a[n-1]*b[n-1]
double inner_product(double a[], double b[], int n) {
  int i;
  double product = 0;
  for (i = 0; i < n; i++) {
    product += (a[i] * b[i]);
  }
  return product;
}
