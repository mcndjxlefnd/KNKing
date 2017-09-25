#include <stdio.h>
int main(void)
{
	int n,i;
	long double fct;

	
	printf("Enter a positive integer: ");
	scanf("%d",&n);

	fct=(long double)n;

	for (i=n-1;i>0;i--)
	{
		fct*=(long double)i;
	}

	printf("Factorial of %d: %Lf\n",n,fct);

	return 0;
}



