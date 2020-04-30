//Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.
#include <stdio.h>

int main(void)
{
	int i, j, k;
//a)
	i = 7; j = 8;
	i *= j + 1;
	printf("a)\t%d\t%d\n", i, j);
	//a) 63   8

//b)
	i = j = k = 1;
	i += j += k;
	printf("b)\t%d\t%d\t%d\n", i, j, k);
	//b) 3   2   1

//c)
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("c)\t%d\t%d\t%d\n", i, j, k);
	//c) 2   -1   3

//d)
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("d)\t%d\t%d\t%d\n", i, j, k);
	//d) 0   0   0

	return 0;
}
