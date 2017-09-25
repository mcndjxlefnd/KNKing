#include <stdio.h>
#include <math.h>

int main(void)
{
  float var;
    
  printf("Please, dear user, enter a value for x:");
  scanf("%f", &var);

  float poly = (((((3 * var + 2) * var - 5) * var - 1) * var + 7) * var - 6);
  printf("%f\n", poly);
  
  return 0;
}
