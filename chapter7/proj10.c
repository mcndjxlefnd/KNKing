#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch,n=0;

	printf("Enter a sentence:\n");

	while(((ch)=getchar())!='\n')
	{
		ch=toupper(ch);
		switch (ch)
		{
		case 'A': n++; break;
		case 'E': n++; break;
		case 'I': n++; break;
		case 'O': n++; break;
		case 'U': n++; break;
		}
	}

	printf("Your sentence contains %d vowels\n",n);

	return 0;
}
