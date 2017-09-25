#include <stdio.h>
int main(void)
{
	int ch;
	
	printf("Enter a string of characters and press enter:\n");

	while((ch=getchar())!= 10)
	{
		if (ch==72)
			putchar('4');
		else
			putchar(ch);
	}

	return 0;
}
