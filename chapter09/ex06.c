#include<stdio.h>

int dig, i, n, k, digit(int n, int k);


int main(void)
{
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	
	printf("How many digits from the right?\n");
	scanf("%d",&k);

	printf("%d is the digit you were looking for.\n",(digit(n,k)));

	return 0;
}

int digit(int n, int k)
{
	for(i=0;i<k;i++)
	{
		dig=n%10;
		n/=10;
	}

	return dig;
}



