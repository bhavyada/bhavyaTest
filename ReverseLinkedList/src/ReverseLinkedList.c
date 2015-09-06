/*
 ============================================================================
 Name        : ReverseLinkedList.c
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
	struct node* next;
};

static void reverse(struct node** head_ref)
{
    struct node* prev   = NULL;
    struct node* current = *head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void Insert(struct node** head, int value)
{
	struct node* current = *head;
	struct node* prev = NULL;

	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = value;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		while ((current != NULL) && (current->data < newnode->data))
		{
			prev = current;
			current = current->next;
		}
		prev->next = newnode;
		newnode->next = current;
	}

}

void PrintLinkedList(struct node* newList)
{

	printf(" Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->data);
		newList = newList-> next;
	}
	printf("\n");
}

int main(void)
{
	struct node* a = NULL;
	Insert(&a, 10);
	Insert(&a, 8);
	Insert(&a, 36);
	printf("The ordered");
	PrintLinkedList(a);
	reverse(&a);
	printf("The reverse");
	PrintLinkedList(a);
	return 0;

}
