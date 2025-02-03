// Write the following function. The call sum(g, i, j) should return
// g(i)+...+g(j).
//      int sum(int (*f)(int),int start,int end);

int sum(int (*f)(int), int start, int end);
int g();

int sum(int (*f)(int), int start, int end) {
  int answer = 0;
  while (start <= end) {
    answer += (*f)(start);
    start++;
  }
  return answer;
}
