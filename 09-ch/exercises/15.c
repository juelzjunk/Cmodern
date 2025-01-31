double median(double x, double y, double z) {
  if (x <= y)
    if (y <= z)
      return y;
    else if (x <= z)
      return z;
    else
      return x;

  if (z <= y)
    return y;
  if (x <= z)
    return x;
  return z;
}

// Rewrite the fuinction so that it has just one return statement.
double median1(double x, double y, double z) {
  double med;
  if (x <= y) {
    if (y <= z) {
      med = y;
    } else if (x <= z) {
      med = z;
    } else {
      med = x;
    }
  }

  if (z <= y) {
    med = y;
  }
  if (x <= z) {
    med = x;
  } else {
    med = z;
  }
  return med;
}
