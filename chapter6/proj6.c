#include <stdio.h>
int main(void)
{
	int n, i=0, k;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (;;)	
	{

		i++;
		k=(2*i)*(2*i);
		if (k<=n)
		printf("%d\n",k);
		else break;
	};
		return 0;
}

