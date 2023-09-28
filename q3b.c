#include <stdio.h>

int priority(char c)
{
    if(c == '^')
        return 3;
    if(c == '*' || c == '/' || c == '%')
        return 2;
    if(c == '+' || c == '-')
        return 1;
}

void push(int *stack, int *front, int item)
{
    if(*front == -1)
    {
        *front = 0;
        stack[*front] = item;
    }
    else
        stack[++(*front)] = item;
}

int pop(int *stack, int *front)
{
    int temp;
    // if(*front == -1)
    // {
    //     printf("\nStack Underflow!\n");
    //     return;
    // }
    temp = stack[*front];
    (*front)--;
    return temp;
}

int main()
{
    int i = 0;
    char infix[50], postfix[50], stack[50], front = -1;
    printf("Enter the infix expression:\n");
    fgets(infix, sizeof infix, stdin);
    while(infix[i] != '\0')
    {
        
        i++
    }
}