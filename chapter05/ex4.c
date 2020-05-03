#include<stdio.h>
int main(void)
{
	int i, j; 

	#define TEST (i>j)-(i<j)

	i=1; j=2;
	printf("i<j: %d\n", TEST);

	i=1; j=1;
	printf("i==j: %d\n", TEST);


	i=2; j=1;
	printf("i>j: %d\n", TEST);

	return 0;
}
