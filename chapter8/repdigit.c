#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10]={false},digit_display[10]={false},rep=0;
	int i,ch,digit[10]={0,1,2,3,4,5,6,7,9},tally[10]={0,0,0,0,0,0,0,0,0,0,};

	printf("Enter series of numbers, separated by spaces: ");
	
mark:
	while((ch=getchar())!=' ')
	{
		if (ch=='\n')
			break;
		tally[ch-48]+=1;

		if(digit_seen[ch-49])
		{
			digit_display[(ch-49)]=true;
			rep=true;
		}
		else
			digit_seen[(ch-49)]=true;
	}
	
	if (ch==' ')
		goto mark;

	printf("Digit:\t\t");
	for(i=0;i<10;i++)
		printf("%-2d", digit[i]);
	printf("\nOccurrences:\t");
	for(i=0;i<10;i++)
		printf("%-2d", tally[i]);
	printf("\n");	
	
	if(rep)
	{
		printf("Repeated digit(s):");
		for(i=0;i<10;i++)
	{
		if (digit_display[i]==true)
		{	
				printf("%2d", i+1);
		}
	}
		printf("\n");
	}
	else printf("No repeated digit\n");

	return 0;
}
