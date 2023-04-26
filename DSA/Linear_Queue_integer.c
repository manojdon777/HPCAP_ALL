#include<stdio.h>
#define MAX 5

int info[MAX];
int rear;
int front;

void init();
int isFull();
int isEmpty();
void push(int);
void pop();
int peek();

int main()
{
	int choice, value;
	init();
	do
	{
		printf("\n\n0.Exit\n1.Push\n2.Pop\nEnter Choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			if(isFull())
				printf("Queue is full\n");
			else
			{
				printf("Enter the value to push : ");
				scanf("%d", &value);
				push(value);
				printf("Value pushed : %d\n", value);
			}
			break;
		case 2:
			if(isEmpty())
				printf("Queue is empty\n");
			else
			{
				value = peek();	
				pop();
				printf("Value poped : %d\n", value);
			}
			break;
		}
	}while(choice !=0);
	return 0;
}
void init()
{
	int i;
	rear = -1;
	front = -1;
	for(i=0; i<MAX; i++)
		info[i] = -1;
}

int isFull()
{
	if(rear == MAX-1)
		return 1;
	else
		return 0;
}
int isEmpty()
{
	if(rear == front)
		return 1;
	else
		return 0;
}

void push(int data)
{
	rear = rear + 1;
	info[rear] = data;
}

void pop()
{
	front = front +1;
	info[front] = -1;
}

int peek()
{
	return info[front+1];
}
