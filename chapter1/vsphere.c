#include <stdio.h>
#include <math.h>

int main(void)
{
  float radius;
  
  printf("enter radius of sphere (cubic metres):");
  scanf("%f", &radius);
  
  printf("volume of sphere (cubic metres): %.0001f\n", 4.0f/3.0f * M_PI * radius * radius * radius);

  return 0;
}