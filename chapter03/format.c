/* Chapter 3, project 3 */

#include <stdio.h>

int main (void)
{
  int num, mm, dd, yyyy;
  float price;
  
  printf("Enter item number:");
  scanf("%d", &num);
  
  printf("Enter unit price: $");
  scanf("%f", &price);
  
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf(" %d / %d / %d", &mm, &dd, &yyyy);
  
  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d\n",num,price,mm,dd,yyyy);
  
  return 0;
}