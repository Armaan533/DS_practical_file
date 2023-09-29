#include <stdio.h>
#include <string.h>

void push(char *stack, int *top, char item)
{
	(*top)++;
	stack[*top] = item;
}

char pop(char *stack, int *top)
{
	*top = *top - 1;
	return stack[*top+1];
}

int priority(char c)
{
	if(c == '+' || c == '-')
		return 1;
	if(c == '*' || c == '/')
		return 2;
	if(c == '%')
		return 3;
	if(c == '^')
		return 4;
	if(c == '(')
		return 5;
	if(c != ')')
		return 0;
}

int main()
{
	char stack[50], infix[50], expres[50];
	int i = 0, top = 0, j = 0;
	printf("Enter the infix expression:\n");
	fgets(infix, sizeof infix, stdin);
	infix[strlen(infix)-1] = ')';
	stack[0] = '(';
	while(infix[i] != '\0')
	{
		if(priority(infix[i]) == 0) 		// Operands will get sent into the expression
		{
			expres[j] = infix[i];
			j++;
		}

		else if(infix[i] == ')')                                 // for closing parenthesis
		{
			while(stack[top] != '(')
			{
				expres[j] = pop(stack, &top);
				j++;
			}
			pop(stack, &top);
		}

		else if(priority(infix[i]) <= priority(stack[top]) && stack[top] != '(')     // for less priority operators
		{
			while(priority(stack[top]) >= priority(infix[i]) && stack[top] != '(')
			{
				expres[j] = pop(stack, &top);
				j++;
			}
			push(stack, &top, infix[i]);
		}

		else if(priority(infix[i]) > priority(stack[top]) || stack[top] == '(')       // for high priority operators and opening parenthesis
			push(stack, &top, infix[i]);

		i++;
	}
	expres[j] = '\0';

	printf("Postfix expression:\n");
	puts(expres);
	return 0;

}
