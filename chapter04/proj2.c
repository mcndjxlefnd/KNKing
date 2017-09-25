#include <stdio.h>
int main (void)
{
  int i, j;

  printf("Enter a three-digit number: ");
  scanf("%d", &i);

  j= ((i % 100) % 10)*100 + ((i % 100)/10)*10 + i/100;

  printf("\nThe reversal is: %d\n", j);

  return 0;
}