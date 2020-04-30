/*What is the value of each of the following expressions in C99? (Give all possible values if an expression may have more than one value.)*/
#include <stdio.h>

int main(void)
{
/*	a) 8 % 5
		3	*/
	printf("a) %d\n", 8%5);

/*	b) -8 % 5
		-3 - actually, it's +3	*/
	printf("b) %d\n", -8%5);

/* c) 8 % -5
		-3	*/
	printf("c) %d\n", 8%-5);

/* d) -8 % -5
		3	*/
	printf("d) %d\n", -8%-5);

	return 0;
}
