#include<stdbool.h>
#include<stdio.h>
int main(void)
{
	bool weekend[]={[0]=1,[6]=1};
	int i;

	for(i=0;i<=6;i++)
		printf("%i ", weekend[i]);
	
	return 0;
}


