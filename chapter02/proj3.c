#include <stdio.h>
#include <math.h>

int main(void)
{
	float radius, volume; 

	printf("Enter radius of sphere: ");
	scanf("%f", &radius);
	printf("%f\n", radius);
	volume = (4.0f/3.0f) * M_PI * radius * radius * radius;
	printf("Volume of sphere: %f\n", volume);

	return 0;
}
