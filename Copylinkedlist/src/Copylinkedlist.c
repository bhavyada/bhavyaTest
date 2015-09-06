/*
 ============================================================================
 Name        : Copylinkedlist.c
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


struct Node* CopyLinkedList(struct Node* head)
{
     struct Node* current = head;
     struct Node dummy;
     struct Node* tail = &dummy;

     while(current != NULL)
     {
       tail->next = malloc(sizeof(struct Node));
       tail = tail->next;
       tail->value = current->value;
       current = current->next;
      }
     tail->next = NULL;
     return dummy.next;
}

void PrintLinkedList(struct Node* newList)
{
	printf("Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->value);
		newList = newList-> next;
	}
	printf("\n");
}

int main(void)
{
	    struct Node* node05 = (struct Node *)malloc(sizeof(struct Node));
		node05->value = 7;
		node05->next = NULL;
		struct Node* node04 = (struct Node *)malloc(sizeof(struct Node));
		node04->value = 3;
		node04->next = node05;
		struct Node* node03 = (struct Node *)malloc(sizeof(struct Node));
		node03->value = 3;
		node03->next = node04;
		struct Node* node02 = (struct Node *)malloc(sizeof(struct Node));
		node02->value = 2;
		node02->next = node03;
		struct Node* node01 = (struct Node *)malloc(sizeof(struct Node));
		node01->value = 0;
		node01->next = node02;

		//struct Node* head = node01;
		printf("original: ");
		PrintLinkedList(node01);
		struct Node *copiedLL = CopyLinkedList(node01);
		printf("copied: ");
//		PrintLinkedList(CopyLinkedList(node01));
		PrintLinkedList(copiedLL);

		return 0;

}
