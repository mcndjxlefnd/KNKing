#include<stdbool.h>

#define STACK_SIZE 100

void stack_overflow(void);
void stack_underflow(void);

float contents[STACK_SIZE];
int top=0;

void make_empty(void)
{
	top=0;
}

bool is_empty(void)
{
	return top==0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(float i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++]=i;
}

float pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}
