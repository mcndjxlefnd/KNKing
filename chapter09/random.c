#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
int i,n=100;


for (i=0;i<n;i++)
{
srand((unsigned int) time(NULL));

	printf("%d\n", rand());
}

return 0;
}
