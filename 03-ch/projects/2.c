// Enter item number: 583
// Enter unit price: 13.51
// Enter purchase date (mm/dd/yyyy): 10/24/2010

// Item         Unit        purchase
//              Price       Date
// 583          $  13.50    10/24/2010
//
// Write program that formats product info
// entered by the user.
// item and date left justified
// unit price right justified
// allow dollar amounts up to 9999.99
//
#include <stdio.h>

int main() {
  int item_number, mm, dd, yy;
  float unit_price;
  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf("%d/%d/%d", &mm, &dd, &yy);
  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");

  printf("%d\t\t$%4.2f\t\t%.2d/%.2d/%.4d\n", item_number, unit_price, mm, dd,
         yy);

  // printf("Item: %d\n", item_number);
  // printf("Price: $%4.2f\n", unit_price);
  // printf("Purchase date: %.2d/%.2d/%.4d\n", mm, dd, yy);
  return 0;
}
