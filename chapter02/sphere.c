/* Volume of a sphere */

#include <stdio.h>
#include <math.h>

#define VOLUME ((4.0f/3.0f)*M_PI*R*R*R)

int main (void)
{
  float R;

  printf ("Enter the radius of the sphere, in miles:");
  
  scanf ("%f", &R);

  printf ("The volume is %.2f cubic miles\n", VOLUME);

  return 0;
}