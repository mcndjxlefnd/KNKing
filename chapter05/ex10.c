//What output does the following program fragment produce? (Assume that i is an integer variable.)
#include<stdio.h>
int main(void)
{
	int i=1;
	switch (i%3) {
		case 0: printf("i%3=%d - zero\n", i%3); printf("\ti=%d\n", i);
		case 1: printf("i%3=%d - one\n", i%3); printf("\ti=%d\n", i);
		case 2: printf("i%3=%d - two\n", i%3); printf("\ti=%d\n", i);
	}
	return 0;
}

//-prints two- nope. prints case 1 and case 2. 3 divides into 1 zero times, so the dividend is the remainder.
//with i being 1, case 0 does not fit. Case 1 fits, so the statments are evaluated, but there is no break
//statement.
