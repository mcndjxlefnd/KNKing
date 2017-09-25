#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top=0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);

int main(void)
{
	printf("Enter a series of parentheses and/or braces:\n");
	
	char ch;

	while ((ch=getchar())!='\n')
	{
		switch (ch)
		{
			case '(': case '{': push(ch); break;
			case ')': if (pop()!='(')
			printf("Parentheses/braces are not nested properly.\n"); break;
			case '}': if (pop()!='{')
			printf("Parentheses/braces are not nested properly.\n");
		}

	}

	if (is_empty())
		printf("Parantheses/braces are nested properly.\n");
	else
		printf("Parentheses/braces are not nested properly.\n");

		return 0;
}

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
	return top==STACK_SIZE;
}

void push(char i)
{
	if (is_full())
	{
		printf("Stack overflow\n");
		exit(EXIT_FAILURE);
	}
	else
		contents[top++]=i;
}

char pop(void)
{
	if (is_empty())
	{
		printf("Parentheses/braces are not nested properly.\n");
		exit(EXIT_SUCCESS);
	}
	else
		return contents[--top];
}
