#include<stdio.h>
int main(void)
{
	int i;

	i=17;
	printf("i=17: %d\n", i>=0?i:-i);
	//prints i=17: 17

	i=-17;
	printf("i=-17: %d\n", i>=0?i:-i);
	//prints i=17: 17
	return 0;
}
