#include<stdio.h>
int main(void)
{
	char mess[140]={0};
	int i,shift;


	printf("Enter the message to be encrypted: ");
	
	for(i=0;((mess[i]=getchar())!='\n');i++);

	printf("Enter shift ammount (1-25): ");

	scanf("%d",&shift);

	printf("Encrypted message: ");

	for(i=0;mess[i]!=0;i++)
	{
		if ((65>mess[i]&&mess[i]<90)||(97>mess[i]&&mess[i]<122))
			putchar(mess[i]);
		else
		{
		if((mess[i]+shift)<91||(mess[i]+shift)<123)
			putchar(mess[i]+shift);
		else
		{
			if((mess[i]+shift)<(91+shift))
			putchar(((mess[i]-'A')+shift)%26+'A');
			else
			putchar(((mess[i]-'a')+shift)%26+'a');
		}
		}
	}

	return 0;
}
