#include <stdio.h>
int main(void)
{
  int mil, min;
  
  printf("Enter a 24-hour time: ");
  scanf("%d : %d", &mil, &min);
  
  if (mil>=12)
    printf("Equivalent 12-hour time: %d:%d PM\n",
	   (mil==12?12:(mil-12)),min);
    else if (mil == 0)
	printf("Equivalent 12-hour time: 12:%d AM\n", min);
	else
	printf("Equivalent 12-hour time: %d:%d AM\n", mil, min);
    
  return 0;
}