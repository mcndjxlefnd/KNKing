#include <stdio.h>
#include <ctype.h>
int main(void)
{
	
	char fi,ch,sur[20];

	printf("Enter a first and last name: ");
	
	fi=getchar();
	fi=toupper(fi);
	
	while(getchar()!=' ');

	for (i=0;(sur[i]=getchar())!='\n';i++)
		if(i=0)
			sur[i]=toupper(sur[i]);
	for (i=0;sur[i]!='\n';i++)
		putchar(sur[i])
	
	putchar(',');
	putchar(' ');
	putchar(fi);
	putchar('.');
	putchar('\n');

	return 0;
}

