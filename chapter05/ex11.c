#include<stdio.h>
int main(void)
{
	int area_code;

	printf("Enter area code within Georgia to find the largest city: ");
	scanf(" %d", &area_code);

	switch (area_code) {
	case 229: printf("Albany\n"); break;
	case 404: printf("Atlanta\n"); break;
	case 470: printf("Atlanta\n"); break;
	case 478: printf("Macon\n"); break;
	case 678: printf("Atlanta\n"); break;
	case 706: printf("Columbus\n"); break;
	case 762: printf("Columbus\n"); break;
	case 770: printf("Atlanta\n"); break;
	case 912: printf("Savannah\n"); break;
	default: printf("Area code unrecognized\n");
	}

	return 0;
}
