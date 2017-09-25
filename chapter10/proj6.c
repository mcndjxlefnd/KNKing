#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

float read_expression(void);

int main(void)
{
	for(;;)
	{
		printf("Enter an RPN expression: ");
		printf("\nValue of expression: %.4f\n", read_expression());
	}
}

float read_expression(void)
{
	while(scanf("\n")!=true)
	{

		float operand, op1, op2;
		char ch;

		if (scanf(" %f", &operand))
		{
			push(operand);
			continue;
		}

		else 
		{
			scanf(" %c", &ch);

			switch (ch)
			{
				case '+':
						op2=pop();
						op1=pop();
						push(op1+op2);
						break;
				case '-':
						op2=pop();
						op1=pop();
						push(op1-op2);
						break;
				case '*':
						op2=pop();
						op1=pop();
						push(op1*op2);
						break;
				case '/':
						op2=pop();
						op1=pop();
						push(op1/op2);
						break;
				case '=': return pop();
				case ' ': break;
				default: exit(EXIT_SUCCESS);
			}
		}
		
	}
}

void stack_underflow(void)
{
	printf("\nNot enough operands in expression\n");
	exit(EXIT_FAILURE);
}

void stack_overflow(void)
{
	printf("\nExpression is too complex\n");
	exit(EXIT_FAILURE);
}
