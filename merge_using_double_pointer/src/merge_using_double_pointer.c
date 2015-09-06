/*
 ============================================================================
 Name        : merge_using_double_pointer.c
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
	int Data;
	struct Node* Next;
};

void Insert(int value, struct Node** current)
{

	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = value;
	newnode->Next = NULL;


	while ((*current) != NULL)
	{
		struct Node* temp = *current;
		if ((newnode -> Data < temp -> Data))
		{
			*current = newnode;
			newnode-> Next = temp;
			break;
		}
		current = &((*current)->Next);
	}

	if ((*current) == NULL)
		{
			*current = newnode;
			return;
		}

}

void PrintLinkedList(struct Node *head)
{
	struct Node* current = head;
	while(current!= NULL)
	{
		printf("%d",current->Data);
		current = current->Next;
	}
}

int main(void) {
	struct Node* head = NULL;

	Insert(2,&head);
	Insert(5,&head);
	Insert(6,&head);
	Insert(3,&head);
	PrintLinkedList(head);
	return 0;
}
