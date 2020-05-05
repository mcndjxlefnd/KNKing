#include<stdio.h>
int main(void)
{
	int hour, minute, pm;

	printf("Enter a 24-hour time: ");
	scanf(" %d : %d", &hour, &minute);

	printf("Equivalent 12-hour time: ");

	if (hour==0||hour==24)
		printf("12");
	else if (hour<=12)
		printf("%d", hour);
	else
		printf("%d", hour-12);

	printf(":%.2d ", minute);

	if (hour>=12&&hour!=24)
		printf("PM\n");
	else
		printf("AM\n");

	return 0;
}
