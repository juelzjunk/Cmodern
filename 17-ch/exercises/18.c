// Modify the compare_parts function so that parts are sorted with their numbers
// in descending order.
struct part {
  int number;
};

int compare_parts_ascend(const void *p, const void *q) {
  return ((struct part *)p)->number - ((struct part *)q)->number;
}
int compare_parts_decend(const void *p, const void *q) {
  return ((struct part *)q)->number - ((struct part *)p)->number;
}
