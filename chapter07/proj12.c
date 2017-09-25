#include <stdio.h>
int main(void)
{
	float op1,op2;
	char ch;
	
	printf("Enter an expression: \n");

	scanf("%f",&op1);
	
	while((ch=getchar())!=10)
	{
		scanf("%f",&op2);
		switch (ch)
		{
			case '+': op1+=op2; break;
			case '-': op1-=op2; break;
			case '*': op1*=op2; break;
			case '/': op1/=op2; break;
		}
	}

	printf("Value of expression: %g\n",op1);

	return 0;
}
