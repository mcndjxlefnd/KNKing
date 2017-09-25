#include <stdio.h>
#include <math.h>
int main (void)
{
	int n,i=1,f;
	float e=1,denom;

	printf("How many terms of the infinite series\n");
	printf("e=1+1/1!+1/2!+1/3!+...1/n!\n");
	printf("would you like to use to approximate e?\n");
	scanf("%d",&n);

	while (i<=n)
	{
		f=i;
		for(denom=1;f>0;f--)
		{
			denom*=f;
		}
		e+=(1/denom);
		i++;
	}

	printf("e=%32.31f\n",e);
	return 0;
}


