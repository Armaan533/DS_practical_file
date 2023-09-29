#include <stdio.h>
#include <stdlib.h>

typedef struct ll
{
	int data;
	struct ll* link;
} node;

void insert(node **left, node **right, int item)
{
	node *temp;
	temp = (node *)malloc(sizeof(node));
	temp->data = item;
	if(*left == NULL)
	{
		*left = temp;
		*right = temp;
	}
	else
	{
		*right->link = temp;
		*right = temp;
	}
	temp->link = NULL;
}

void delete(node **left, node **right, int key)
{
	node *temp, q = *left;
	if(q->data == key)
	{
		temp = q;
		*left = q->link;
	}
	else
	{
		while(q->link != NULL && (q->link)->data != key)
			q=q->link;
		if((q->link)->data == key)
		{
			temp = q->link;
			q->link = temp->link;
			if(q->link == *right)
				*right = q;
		}
		else
		{
			printf("Unsuccessful Search");
			return;
		}
	}
	free(temp);
	printf("Node deleted successfully");
}

void display(node *left, node *right)
{
	node *q = left;
	while(q->link != NULL)
}

int main()
{
	node *left = NULL, *right = NULL;
	int choice, arg, flag = 0;
	return 0;
}
