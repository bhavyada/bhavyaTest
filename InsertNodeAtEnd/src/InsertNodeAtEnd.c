/*
 ============================================================================
 Name        : InsertNodeAtEnd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void InsertAtEnd (struct node** headref, int value)
{
	struct node* current = *headref;
	struct node* tail;
	if (current == NULL)
	{
		tail = current;
	}
	else
	{
		current = current ->next;
	}


}
int main(void) {
	struct node* head = NULL;

	InsertAtEnd(&head,3);
	InsertAtEnd(&head,5);
	InsertAtEnd(&head, 6);
	return 0;

}
