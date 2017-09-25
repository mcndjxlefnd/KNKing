#include <stdio.h>

#define N 10

int sum_array(const int a[], int n)

int main(void)
{
	int a[N];

	printf("Enter a series of %d integers, separated by spaces: ", N);

	while(a++<N)
	{
		scanf(" %d", a);
	}

	printf("The sum is %d.", sum_array(a,N));

	return 0;
}


int sum_array(const int a[], int n)
{
	int sum=0;

	while (a++<n)
		sum+=*a;
	
	return sum;
}

