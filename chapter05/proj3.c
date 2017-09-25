/*modified from book*/
#include <stdio.h>
int main(void)
{
  float ocommission, rcommission, value, price;
  int shares;
  
  printf("\nEnter the number of shares traded: ");
  scanf("%d", &shares);
  
  printf("Enter the price per share: $");
  scanf("%f", &price);
  
  value = price * shares;
  
  if (value<2500.00f)
    ocommission=30.00f+0.017f*value;
  else if (value<6250)
    ocommission=56.00f+0.0066f*value;
  else if (value<20000)
    ocommission=76.00f+0.0034f*value;
  else if (value<50000)
    ocommission=100.00f+0.0022f*value;
  else if (value<500000)
    ocommission=155.00f+0.0011f*value;
  else
    ocommission=255.00f+0.0009f*value;

  if (ocommission<39.00f)
    ocommission=39.00f;

  if (shares<2000)
    rcommission=33+0.03*shares;
  else
    rcommission=33+0.02*shares;
  
  printf("\nOriginal broker's commission:\t$%.2f\n", ocommission);
  
  printf("Rival broker's commission:\t$%.2f\n", rcommission);

  return 0;
}