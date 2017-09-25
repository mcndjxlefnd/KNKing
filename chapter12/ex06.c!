#include <stdio.h>

#define N 10

int sum_array(int *a, int n);

int main(void)
{
	int b[N], *p=b;

	printf("Enter a series of %d integers, separated by spaces: ", N);

	while(p<b+N)
	{
		scanf(" %d", p++);
	}

	printf("The sum is %d.", sum_array(b,N));

	return 0;
}


int sum_array(int *a, int n)
{
	int sum=0, *p=a;

	while (p<a+n)
		sum+=*p++;
	
	return sum;
}

