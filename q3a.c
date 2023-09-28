#include <stdio.h>
#define MAX 5

void insert(int *queue, int *front, int *rear, int item)
{
    if(*rear == MAX-1)
    {
        printf("Queue is full\n");
        return;
    }
    if(*front == -1)
    {
        *front = 0;
        *rear = 0;
    }
    else
        *(rear)++;
    queue[*rear] = item;
    printf("\nItem inserted successfully!\n");
}

void delete(int *queue, int *front, int *rear)
{
    if(*front == -1)
    {
        printf("Queue is empty! Can't delete item\n");
        return;
    }
    if(*front == *rear)
        *front = -1;

    else
        (*front)++;
    printf("\nItem removed successfully\n");
}

void display(int *queue, int front, int rear)
{
    int i;
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue:\t");
    for(i=front;i<=rear;i++)
        printf("%d", queue[i]);
    printf("\n");
}

int main()
{
    int queue[MAX], front = -1, rear = -1, choice, arg, flag = 0;
    while(flag == 0)
    {
        printf("\nChoose an operation to perform:\n");
        printf("1- Insert an item into queue\n");
        printf("2- Remove an item from queue\n");
        printf("3- Display the queue\n");
        printf("Press 0 to quit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item to insert:\t");
            scanf("%d", &arg);
            insert(queue, &front, &rear, arg);
            break;
        case 2:
            delete(queue, &front, &rear);
            break;
        case 3:
            display(queue, front, rear);
            break;
        case 0:
            flag = 1;
            break;
        default:
            printf("Wrong Input! Try again\n");
        }
    }
}