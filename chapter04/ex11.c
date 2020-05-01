//Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.
#include <stdio.h>
int main(void)
{
	int i, j, k;

//a)
	i = 1;
	printf("\t%d", i++ -1);
	printf("\t%d\n", i);
	//a) 0   2

//b)
	i = 10; j = 5;
	printf("\t%d", i++ - ++j);
	printf("\t%d\t%d\n", i, j);
	//b) 4   11   6

//c)
	i = 7; j = 8;
	printf("\t%d", i++ - --j);
	printf("\t%d\t%d\n", i, j);
	//c) 0   8   7

//d)
	i = 3; j = 4; k = 5;
	printf("\t%d", i++ - j++ + --k);
	printf("\t%d\t%d\t%d\n", i, j, k);
	//d) 3   4   5   4

	return 0;
}
