#include <stdio.h>

int main(void)
{
	float x=1223.578921;
//a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
	printf("a)|%-8.1e|\n", x);
//b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
	printf("b)|%10.6e|\n", x);
//c)Fixed decimal notation; left-justified in a field of size 9; three digits after the decimal point.
	printf("c)|%-8.3f|\n", x);
//d)Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
	printf("d)|%6.0f|\n", x);

	return 0;
}
