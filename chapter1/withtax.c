#include <stdio.h>

int main(void)
{
  float cost;

  printf("enter an amount: $");
  scanf("%f", &cost);

  printf("with tax added: $%.2f\n", cost * 1.05);

  return 0;
}