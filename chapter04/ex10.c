//Show the output produced by each of the following program fragments. Assume that i and j are int variables.
#include <stdio.h>
int main(void)
{
	int i, j, k;

//a)
	i = 6;
	j = i += i;
	printf("a)\t%d\t%d\n", i, j);
	//a)   12   12

//b)
	i = 5;
	j = (i -= 2) + 1;
	printf("b)\t%d\t%d\n", i, j);
	//b)   3   4

//c)
	i = 7;
	j = 6 + (i = 2.5);
	printf("c)\t%d\t%d\n", i, j);
	//c) 2   8

//d)
	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("\t%d\t%d\n", i, j);
	//d) 6   9

	return 0;
}
