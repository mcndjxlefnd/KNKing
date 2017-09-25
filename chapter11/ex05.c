#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long total_sec;

	int hr=0, min=0, sec=0;

	printf("Enter number of seconds since midnight: ");
	scanf("%ld", &total_sec);

	split_time(total_sec, &hr, &min, &sec);

	printf("\nhr: %d, min=%d, sec=%d\n", hr, min, sec);

	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr=total_sec/(60*60);

	*min=(total_sec-(*hr*60*60))/60;

	*sec=total_sec-(*hr*60*60)-(*min*60);
}
