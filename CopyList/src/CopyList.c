/*
 ============================================================================
 Name        : CopyList.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void CopyList(struct node* head)
{
	struct node* current = head;
	struct node* tail = NULL;
	struct node* newList = NULL;

	while (current != NULL)
	{
		if (newList == NULL)
		{
			struct node* newList = (struct node*)malloc(sizeof(struct node));
			newList -> data = current -> data;
			newList -> next = NULL;
			tail ->next = newList;
		}
		else
		{
			tail->next = malloc(sizeof(struct node));
			tail = tail->next;
			tail ->data = current ->data;
			tail ->next = NULL;

		}
	}
}

void PrintLinkedList(struct node* head)
{
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	    struct node* node05 = (struct node *)malloc(sizeof(struct node));
		node05->data = 7;
		node05->next = NULL;
		struct node* node04 = (struct node *)malloc(sizeof(struct node));
		node04->data = 3;
		node04->next = node05;
		struct node* node03 = (struct node *)malloc(sizeof(struct node));
		node03->data = 3;
		node03->next = node04;
		struct node* node02 = (struct node *)malloc(sizeof(struct node));
		node02->data = 2;
		node02->next = node03;
		struct node* node01 = (struct node *)malloc(sizeof(struct node));
		node01->data = 5;
		node01->next = node02;

		struct node *head = node01;
		struct node *newList = NULL;
		CopyList(node05, newList);
		PrintLinkedList(newList);

		return 0;
}







