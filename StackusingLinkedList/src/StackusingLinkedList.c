/*
 ============================================================================
 Name        : StackusingLinkedList.c
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

struct Node* head = NULL;

void push(struct Node** head, int num)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->Data = num;
	newNode->Next = *head;
	*head = newNode;
}

int pop()
{
	int value;
	struct Node* pop_element = head;
	if(pop_element == NULL)
	{
		return (0);
	}
	value = head->Data;
	head = head->Next;
	free(pop_element);
	return (value);
}




int main(void)
{
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	push(&head, 6);
	int a = pop();
	int b = pop();
	printf("%d %d",a,b);

	return 0;

}
