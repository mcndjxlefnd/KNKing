#include <stdio.h>
int main(void)
{
	int num, last;
	
	printf("Enter a number whose digits will be reversed: ");
	scanf("%d", &num);

	printf("The number, with digits reversed is: ");

	do
	{
		last=(num%10);
		printf("%d",last);
		num/=10;
	}
	while (num>0);

	printf("\n");

	return 0;
}
