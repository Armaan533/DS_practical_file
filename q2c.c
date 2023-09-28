#include <stdio.h>
#define MAX 5

void push(int *stack, int *front, int item)
{
    if(*front == MAX-1)
    {
        printf("\nStack Overflow!\n");
        return;
    }
    if(*front == -1)
    {
        *front = 0;
        stack[*front] = item;
    }
    else
        stack[++(*front)] = item;
    printf("\nItem pushed into stack successfully!\n");
}

void pop(int *stack, int *front)
{
    if(*front == -1)
    {
        printf("\nStack Underflow!\n");
        return;
    }
    (*front)--;
    printf("\nItem popped successfully\n");
}

void display(int *stack, int front)
{
    int i;
    if (front == -1)
    {
        printf("\nStack is empty\n");
        return;
    }
    printf("\nStack:\t");
    for(i=0;i<=front;i++)
        printf("%d\t", stack[i]);

    printf("\n");
}

int main()
{
    int stack[MAX], front = -1, flag = 0, choice, arg;
    while(flag == 0)
    {
        printf("\nChoose an operation to perform:\n");
        printf("1- Push an item\n2- Pop an item\n3- Display current stack\nPress 0 to quit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter an item to push into the stack:\t");
            scanf("%d", &arg);
            push(stack, &front, arg);
            break;
        case 2:
            pop(stack, &front);
            break;
        case 3:
            display(stack, front);
            break;
        case 0:
            flag = 1;
            break;
        default:
            printf("Wrong input! Try again");
        }
    }
}