#include <stdio.h>
#include <math.h>
int main (void)
{
	int i=1,f;
	float e=1,denom,term=3,n;

	printf("To what size term of the infinite series\n");
	printf("e=1+1/1!+1/2!+1/3!+...1/n!\n");
	printf("would you like to approximate e?\n");
	scanf("%f",&n);

	for (;term>=n;i++)
	{
		f=i;
		for(denom=1;f>0;f--)
		{
			denom*=f;
		}
		term=1/denom;
		e+=term;
	}

	printf("e=%32.31f\n",e);
	return 0;
}


