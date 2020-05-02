#include<stdio.h>
int main(void)
{
	int i, j, k;
//a)
	i=3; j=4; k=5;
	printf("a) %d", i<j||++j<k);
	printf("\t%d\t%d\t%d\n", i, j, k);
	//a) 1	3	4	5

//b)
	i=7; j=8; k=9;
	printf("b) %d", i-7&&j++<k);
	printf("\t%d\t%d\t%d\n", i, j, k);
	//b) 0	7	8	9

//c)
	i=7; j=8; k=9;
	printf("c) %d", (i=j)||(j=k));
	printf("\t%d\t%d\t%d\n", i, j, k);
	//c) 1	8	8	9

//d)
	i=1; j=1; k=1;
	printf("d) %d", ++i||++j&&++k);
	printf("\t%d\t%d\t%d\n", i, j, k);
	//c) 1	2	1	1

	return 0;
}
