#include <stdio.h>
int main(void)
{
  int a,b,c,d,minA,minB,maxA,maxB,min,max;

  printf("Enter four integers: ");
  scanf("%d %d %d %d",&a,&b,&c,&d);

  if (a<b || c<d)
  {
    minA=a;minB=c;
    maxA=b;maxB=d;
  }
  else
  {
    minA=b;minB=d;
    maxA=a;maxB=c;
  }
  printf("minA: %d minB: %d maxA: %d maxB: %d\n\n",minA,minB,maxA,maxB);
  
  if (minA<minB || maxB<maxA)
  {
    min=minA;max=maxA;
  }
  else
  {
    min=minB;max=maxB;
  }
  
  printf("minA: %d minB: %d maxA: %d maxB: %d\n\n",minA,minB,maxA,maxB);
  
  if (min<=minA || max>=maxA)
  {
   printf("minA: %d minB: %d maxA: %d maxB: %d\n\n",minA,minB,maxA,maxB);
  }
  else
  {
   min=minA;max=maxB;
  }
 
 printf("minA: %d minB: %d maxA: %d maxB: %d\n\n",minA,minB,maxA,maxB);
/* 
 if (maxA>maxB)
  {
    max=maxA;
  
    
  }
  else
  {
    max=maxB;
  }
*/
    
  printf("Largest:\t%d\n", max);
  printf("Smallest:\t%d\n", min);

return 0;
}