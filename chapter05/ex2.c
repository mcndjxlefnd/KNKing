#include<stdio.h>
int main(void)
{
	int i, j, k;

//a)	
	i=10; j=5;
	printf("a) %d\n", !i<j);
	//a) 1

//b)
	i=2; j=1;
	printf("b) %d\n", !!i+!j);
	//b) 1

//c)
	i=5; j=0; k=-5;
	printf("c) %d\n", i&&j||k);
	//c) 1

//d)
	i=1; j=2; k=3;
	printf("d) %d\n", i<j||k);
	//d) 1

	return 0;
}
