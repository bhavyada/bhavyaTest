/*
 ============================================================================
 Name        : Merge_two_nodes_singlehead.c
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

struct Node* merge_two_heads(struct Node* head1, struct Node* head2)
{
	struct Node* head;
	if ((head1 != NULL)&&(head2 != NULL))
		{
			head = (head1 < head2)? head1: head2;
		}
	while((head1 != NULL) && (head2 != NULL))
		{
			if (head1->Data < head2->Data)
			{
				head->Next = head1;
				head1 = head1->Next;
			}
			else
			{
				head->Next = head2;
				head2 = head2->Next;
			}
			head = head->Next;
		}
		if (head1 == NULL)
		{
			head->Next = head2;
		}
		if (head2 == NULL)
		{
			head->Next = head1;
		}
		return head;
}

void PrintLinkedList(struct Node* newList)
{
	printf("Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->Data);
		newList = newList->Next;
	}
	printf("\n");
}

int main(void) {
	struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));
	node5->Data = 12;
	node5->Next = NULL;

	struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
	node4->Data = 10;
	node4->Next = node5;

	struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
	node3->Data = 8;
	node3->Next = node4;

	struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
	node2->Data = 4;
	node2->Next = node3;

	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
	node5->Data = 2;
	node5->Next = node2;

	struct Node* head1 = node1;

	struct Node* node15 = (struct Node*)malloc(sizeof(struct Node));
	node5->Data = 35;
	node5->Next = NULL;

	struct Node* node14 = (struct Node*)malloc(sizeof(struct Node));
	node4->Data = 32;
	node4->Next = node15;

	struct Node* node13 = (struct Node*)malloc(sizeof(struct Node));
	node3->Data = 25;
	node3->Next = node14;

	struct Node* node12 = (struct Node*)malloc(sizeof(struct Node));
	node2->Data = 8;
	node2->Next = node13;

	struct Node* node11 = (struct Node*)malloc(sizeof(struct Node));
	node5->Data = 3;
	node5->Next = node12;

	struct Node* head2 = node11;
	struct Node* merge;
	PrintLinkedList(head1);
	PrintLinkedList(head2);
	merge = merge_two_heads(head1, head2);
	PrintLinkedList(merge);
	return 0;
}
