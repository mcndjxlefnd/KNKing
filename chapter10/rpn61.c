#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include "stack.h"

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(float i);
float pop(void);

float read_expression(void);

int main(void)
{
    for ( ; ; )
    {
        printf("Enter an RPN expression: ");
        printf("\nValue of expression: %.4f\n", read_expression());
    }
}

float read_expression(void)
{
    while (scanf("\n") == false)
    {
        float operand, op1, op2;
        char ch;

        if (scanf(" %f", &operand))
        {
            push(operand);
        }
        else
        {
            scanf(" %c", &ch);

            switch (ch)
            {
            case '+':
                op2 = pop();
                op1 = pop();
                printf("%f + %f = %f\n", op1, op2, op1 + op2);
                push(op1 + op2);
                break;
            case '-':
                op2 = pop();
                op1 = pop();
                printf("%f - %f = %f\n", op1, op2, op1 - op2);
                push(op1 - op2);
                break;
            case '*':
                op2 = pop();
                op1 = pop();
                printf("%f * %f = %f\n", op1, op2, op1 * op2);
                push(op1 * op2);
                break;
            case '/':
                op2 = pop();
                op1 = pop();
                printf("%f / %f = %f\n", op1, op2, op1 / op2);
                push(op1 / op2);
                break;
            case '=':
                op1 = pop();
                printf("Result = %f\n", op1);
                return op1;
                //return pop();
            default:
                printf("Unexpected operator %c\n", ch);
                exit(EXIT_SUCCESS);
            }
        }
    }
    return 0;
}

#define STACK_SIZE 100

_Noreturn void stack_overflow(void);
_Noreturn void stack_underflow(void);

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

float contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
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
        contents[top++] = i;
}

float pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}