#include <stdio.h>
int main (void)
{
  int i, j;

  printf("Enter a two-digit number: ");
  scanf("%d", &i);

  j= ((i %10)*10 + i/10);

  printf("\nThe reversal is: %d\n", j);

  return 0;
}