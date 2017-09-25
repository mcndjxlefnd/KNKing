#include <stdio.h>
int main(void)
{
	int ch, i, words, letters=1;

	printf("Enter a sentence: \n");

	for (words=0;ch!='.';words++)
	{
		for(i=0;(ch=getchar())!=' ';i++)
		{ 	
			if (ch=='.')
			break;
		}
		letters+=i;
	}
		
	printf("Average word length: %g\n",((float) letters)/((float) words));
	
	return 0;
}
