// Write a program that asks for dollar and cent amount
// then display total with 5% tax added
#include <stdio.h>

int main() {
  float amount;
  float tax = 1.05;
  float wtax;
  printf("Enter an amount: ");
  scanf("%f", &amount);
  wtax = amount * tax;
  printf("Total with tax: %.2f\n", wtax);
  return 0;
}
