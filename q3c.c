#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void push(int *stack, int *front, int item)
{
	(*front)++;
	stack[*front] = item;
}

int pop(int *stack, int *front)
{
	*front = *front - 1;
	return stack[*front+1];
}

int main()
{
	char postfix[20][5], temp[50];
	int i = 0, j = 0, k = 0, stack[20], front = -1, num, num1, num2, result;
	printf("Enter postfix expression:\n");
	fgets(temp, sizeof temp, stdin);
	do
	{
		if(temp[i] == ',' || temp[i] == '\n')
		{
			postfix[j][k] = '\0';
			j++;
			k = 0;
		}
		else
			postfix[j][k++] = temp[i];
		i++;
	}while(temp[i] != '\0');

	for(i=0;i<j;i++)
	{
		num = atoi(postfix[i]);
		if((num == 0) && (strcmp(postfix[i], "0") != 0))
		{
			num1 = pop(stack, &front);
			num2 = pop(stack, &front);
			switch(postfix[i][0])
			{
				case '+':
					push(stack, &front, num1+num2);
					break;
				case '-':
					push(stack, &front, num2-num1);
					break;
				case '*':
					push(stack, &front, num1*num2);
					break;
				case '/':
					push(stack, &front, num2/num1);
					break;
				// case '^':
				// 	num = pow(num2, num1);
				// 	push(stack, &front, num);
				// 	break;
			}
		}
		else
			push(stack, &front, num);
	}
	result = pop(stack, &front);
	printf("=> %d", result);
	return 0;
}
