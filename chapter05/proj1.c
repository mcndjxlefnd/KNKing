#include <stdio.h>
int main(void)
{
  int num, count;

  printf("Enter a number less than\nor equal to 9999: ");
  scanf("%d", &num);

  if (num >= 1000)
    count = 4;
  else if (num >= 100)
    count = 3;
  else if (num >= 10)
    count = 2;
  else
    count = 1;

  printf("The number %d has %d digits.\n", num, count);

  return 0;
}