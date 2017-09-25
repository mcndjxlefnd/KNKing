#include <stdio.h>
int main(void)
{
  int a,b,c,d,minA,minB,maxA,maxB,min,max;

  printf("Enter four integers: ");
  scanf("%d %d %d %d",&a,&b,&c,&d);

  if (a<b)
  {
    minA=a;maxA=b;
  }
  else
  {
    minA=b;maxA=a;
  }
  if (c<d)
  {
    minB=c;maxB=d;
  }
  else
  {
    minB=d;maxB=c;
  }
  if (minA<minB)
  {
    min=minA;
  }
  else
  {
    min=minB;
  }
  if (maxA>maxB)
  {
    max=maxA;
  }
  else
  {
    max=maxB;
  }
    
  printf("Largest:\t%d\n", max);
  printf("Smallest:\t%d\n", min);

return 0;
}