#include<stdio.h>
int main (void)
{
	float num, max;
	int i;

	for (max=0;i<=6;i++)
	{
			printf("Enter a number: ");
			scanf("%g", &num);
			
			if (num>max)
			max = num;
	}

	printf("The largest number entered was %g\n", max);

	return 0;
}	



