#include <stdio.h>
int main(void)
{
	int i, j, k;

//a)
	i=2; j=3;
	k=i*j==6;
	printf("a)\t%d\n", k);
	//a)	1;

//b)
	i=5; j=10; k=1;
	printf("\t%d\n", k>i<j);
	//b)	1;

//c)
	i=3; j=2; k=1;
	printf("\t%d\n", i<j==j<k);
	//c)	1;

//d)
	i=3; j=4; k=5;
	printf("\t%d\n", i%j+i<k);
	printf("i/%j=%d\n", i%j);
	//d)	0;

	return 0;
}


