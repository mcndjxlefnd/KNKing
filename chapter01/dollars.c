#include <stdio.h>
#include <math.h>

int main(void)
{
  int dollars, dollars20, dollars10, dollars5, dollars1;
  
  printf("Enter a whole dollar amount, you son of a bitch: $");
  scanf("%d", &dollars);

  dollars20 = dollars / 20;

  dollars10 = (dollars - (dollars20 * 20))/10;

  dollars5 = ((dollars - (dollars20 * 20 + dollars10 * 10))/5);

  dollars1 = (dollars - (dollars20 * 20 + dollars10 * 10 +
    dollars5 * 5))/1;


  printf("$20 bills: %d\n", dollars20);
  printf("$10 bills: %d\n", dollars10);
  printf(" $5 bills: %d\n", dollars5);
  printf(" $1 bills: %d\n", dollars1);

  return 0;
}