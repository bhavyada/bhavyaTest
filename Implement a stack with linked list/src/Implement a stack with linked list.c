/*
 ============================================================================
 Name        : Implement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int Data;
	struct Node* Next;
};

void pop(struct Node** head)
{
	struct Node* current = *head;
	struct Node* prev = NULL;
	if (*head == NULL)
	{
		printf("Stack is empty, nothing to remove");
	}
	else
	{
		while(current != NULL)
		{
			current = current -> Next ->Next;
			prev= current;
		}
	}
	prev->Next = NULL;
}

void push(struct Node** head, int value)
{
	struct Node* current = *head;
	struct Node* prev = NULL;
	struct Node* Newnode = malloc(sizeof(struct Node));
	Newnode->Data = value;
	Newnode->Next = NULL;

	if(*head == NULL)
	{
		*head = Newnode;
	}

	else
	{
		while(current != NULL)
		{
			prev = current;
			current = current->Next;
		}
		prev = Newnode;
	}
}

int main(void) {
	struct Node* a = NULL;
	push(&a,7);
	push(&a,8);
	push(&a,4);
	push(&a,9);
	push(&a,5);
	pop(&a);
	pop(&a);
	pop(&a);
	pop(&a);
	return 0;
}
