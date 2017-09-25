#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int i,n;
	char ch, array[n];



	printf("Enter message: ");

	for(n=0;(ch=getchar())!='\n';n++ )
	{
		array[n]=ch;
	}

	printf("\n");
	for(i=0;i<=n;i++)
		printf("%c", array[i]);
	
	printf("\n");
	return 0;

}

