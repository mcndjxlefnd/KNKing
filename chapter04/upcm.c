/* Transcribed from chapter 4 */

#include <stdio.h>

int main (void)
{
  int total;

  printf("Enter the total: ");
  scanf("%d",&total);

  printf("Check digit: %d\n", 9-((total-1)%10));

  printf("Check digit: %d\n", (10-(total%10))%10);
  
  return 0;
}