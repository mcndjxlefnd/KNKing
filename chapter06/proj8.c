#include <stdio.h>
int main(void)
{
	int days, day1, i;
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=sun, 7=sat): ");
	scanf("%d", &day1);

	for(i=1;i<day1;i++)
	{
		printf("   ");
	}

	for (i=1;i<=days;i++)
	{
		printf("%3d", i);
	

		if ((day1+i-1)%7==0)
			printf("\n");
	}
		return 0;
}
