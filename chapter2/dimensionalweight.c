/*Transcribed from chapter 2 example dweight2.c */

#include <stdio.h>

int main (void)
{
  int height, length, width, volume, weight;

  printf ("Enter the height of the box:");
  scanf ("%d", &height);

  printf ("Enter the length of the box:");
  scanf ("%d", &length);

  printf ("Enter the width of the box:");
  scanf ("%d", &width);

  volume = length*height*width;
  weight = (volume + 165) / 166;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}