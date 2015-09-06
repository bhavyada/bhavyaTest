/*
 ============================================================================
 Name        : InsertNodeAtBeginning.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node* next;
};
void Insert(struct node ** headref, int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->value = data;
	newnode->next = headref ;
	headref = newnode;

}
int main(void) {
	struct node* head = NULL;
	Insert(&head, 2);
	Insert(&head, 3);
	Insert(&head, 4);
	print
}
