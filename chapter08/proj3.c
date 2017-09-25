#include<stdbool.h>
#include<stdio.h>
int main(void)
{
	int i;
	char ch;

	
	printf("Enter a number: ");
for(;;)
{
	bool digit_seen[10]={false},digit_display[10]={false},rep=0;
	
	for(i=0;(ch=getchar())!='\n';i++)
	{
		if((i==0&&ch=='0')||(i==0&&ch=='-'))
			goto mark;
		if(digit_seen[ch-48])
		{
			digit_display[(ch-48)]=true;
			rep=true;
		}
		else
			digit_seen[(ch-48)]=true;
	}

	if(rep)
	{
		printf("Repeated digit(s):");
		for(i=0;i<10;i++)
		{
			if(digit_display[i]==true)
			{
				printf("%2d",i);
			}
		}
		printf("\n");
	}
	else printf("No repeated digit\n");
}
mark:

return 0;
}

