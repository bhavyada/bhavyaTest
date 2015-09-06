/*
 ============================================================================
 Name        : Reverse_k_bits_in_linkedlist.c
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

void insert(struct node** head, int value)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode-> data = value;

	//insert this newnode at the head

	if (head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
		// make the newnode next point to the previous head and make the head point to new newnode.
	{
		newnode->next = *head;
		*head = newnode;
	}
}

struct node* reverse(struct node* head, int number)
{
	struct node* current = head;
	struct node* prev = NULL;
	struct node* next = NULL;
	struct node* hop = NULL;
	struct node* reversed_hop = NULL;
	int count = 0;

	while((current != NULL) && (count < number))
	{
		hop = current;
		current = current->next;
		count++;

	}


	count = count - number;
	reversed_hop = current;
	while ((current != NULL) && (count < number))
	{
		next  = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}


	hop->next = prev;
	// the head next must be from 4 in my example.
	if(next !=  NULL)
	{
		reversed_hop->next = reverse(next, number);
	}


	// prev is new head of the input list //
	return head;

}

void print(struct node *head)
{
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}




int main(void) {
	// let the linked list be null
	struct node* head = NULL;

	insert(&head,11);
	insert(&head,10);
	insert(&head,9);
	insert(&head,8);
	insert(&head,7);
	insert(&head,6);
	insert(&head,5);
	insert(&head,4);
	insert(&head,3);
	insert(&head,2);
	insert(&head,1);

	printf(" the ordered linked list is\n");
	print(head);


	printf("the reverse ordered list is\n");
	print(reverse(head,3));
	return 0;

}
