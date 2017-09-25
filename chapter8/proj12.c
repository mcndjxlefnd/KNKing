#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch,value=0,alpha[26]={1,3,3,2,1,4,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

	printf("Enter a word: ");

	
	while ((ch=getchar())!=10)
	{
		ch=toupper(ch);
		value+=alpha[ch-65];

	
	}

	printf("Scrabble value: %d\n",value);

	return 0;
}
