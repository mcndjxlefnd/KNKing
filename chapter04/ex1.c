//Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.
#include <stdio.h>
int main(void)
{
	int i, j, k;
//	a)
		i=5; j=3;
		printf("a) %d %d\n", i / j, i % j);
		//a) 1 2

//	b)
		i=2; j=3;
		printf("b) %d\n", (i + 10) % j);
		//b) 0

//	c)
		i=7; j=8; k=9;
		printf("c) %d\n", (i + 10) % k / j);
		//c) 1

//	d)
		i=1; j=2; k=3;
		printf("d) %d\n", (i + 5) % (j + 2) / k);
		//d) 0

	return 0;
}

