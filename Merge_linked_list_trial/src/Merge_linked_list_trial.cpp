//============================================================================
// Name        : Merge_linked_list_trial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
#include<stdio.h>


struct Node
{
	int Data;
	struct Node* Next;
};

struct Node* merge_linked_list(struct Node* a, struct Node* b)
{
	struct Node dummy;
	struct Node* tail = &dummy;
	dummy.Next = NULL;

	while((a != NULL) && (b != NULL))
	{
		if (a->Data < b->Data)
		{
			tail->Next = a;
			a = a->Next;
		}
		else
		{
			tail->Next = b;
			b = b->Next;
		}
		tail = tail->Next;
	}
	if (a == NULL)
	{
		tail->Next = b;
	}
	if (b == NULL)
	{
		tail->Next = a;
	}
	return dummy.Next;
}

void Insert(struct Node** head, int value)
{
	struct Node* current = *head;
	struct Node* prev = *head;
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->Data = value;
	newNode->Next = NULL;

	if ((*head == NULL) || (newNode->Data <= (*head)->Data))
	{
		*head = newNode;
		newNode->Next = prev;
	}
	else
	{
		while ((current != NULL) && (newNode->Data >= current->Data))
		{
			prev = current;
			current = current->Next;
		}
		prev->Next = newNode;
		newNode->Next = current;
	}
}

void Print_Linked_List(struct Node* head)
{
	struct Node* current = head;
	while(current != NULL)
	{
		printf(" %d",current->Data);
		current = current->Next;
	}
	printf("\n");
}
int main()
{
	struct Node* a = NULL;
	struct Node* b = NULL;
	struct Node* merge = NULL;

	Insert(&a, 22);
	Insert(&a, 28);
	Insert(&a, 22);
	Insert(&a, 36);
	Insert(&a, 22);

	Insert(&b, 15);
	Insert(&b, 27);
	Insert(&b, 22);
	Insert(&b, 32);

	printf("\nThe first list is");
	Print_Linked_List(a);
	printf("\nThe second list is");
	Print_Linked_List(b);
	printf("\nThe merged list is");
	merge = merge_linked_list(a,b);
	Print_Linked_List(merge);
	return 0;
}
