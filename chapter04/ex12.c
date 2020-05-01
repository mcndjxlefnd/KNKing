//Show the output produced by each of the follwoing program fragments. Assume that i and j are int variables.
#include <stdio.h>
int main(void)
{
	int i, j;

//a)
	i = 5;
	j = ++i * 3 - 2;
	printf("\t%d\t%d\n", i, j);
	//a) 6   16

//b)
	i = 5;
	j = 3 - 2 * i++;
	printf("\t%d\t%d\n", i, j);
	//b) 6   -7

//c)
	i = 7;
	j = 3 * i-- + 2;
	printf("\t%d\t%d\n", i, j);
	//c) 6   23

//d)
	i = 7;
	j = 3 + --i * 2;
	printf("\t%d\t%d\n", i, j);
	//d) 6   15

	return 0;
}
