/*
 ============================================================================

 Name        : QueueUsingLinkedList.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int value;
	struct Node *next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void Insert(int data)
{
	struct Node* newnode = malloc(sizeof(struct Node));
	newnode->value = data;
	newnode->next = NULL;

	if (tail == NULL)
	{
		tail =  newnode;
		head = tail;
	}
	else
	{
		tail->next = newnode;
		tail = tail->next;
	}
}

void Delete()
{
	struct Node* temp = NULL;

	if (head == NULL)
	{
		printf("The queue is empty");
	}
	else
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void PrintLinkedList()
{
	struct Node* start = head;
	while (start != NULL)
	{
		printf("%d ", start->value);
		start = start->next;
	}
	printf("\n");
}

int main(void)
{
	Insert(5);
	Insert(9);
	Insert(10);
	Insert(34);
	Insert(67);
	PrintLinkedList();
	Delete();
	Delete();
	PrintLinkedList();
	return 0;
}
