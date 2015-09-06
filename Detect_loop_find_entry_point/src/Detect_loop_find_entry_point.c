/*
 ============================================================================
 Name        : Detect_loop_find_entry_point.c
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

struct Node* detect_loop(struct Node** head)
{
	if(head == NULL)
	{
		return NULL;
	}
	struct Node* slow_p = *head;
	struct Node* fast_p = *head;

	while((fast_p != NULL)&&(fast_p->Next != NULL))
	{
		slow_p = slow_p->Next;
		fast_p = fast_p->Next->Next;
		if(fast_p == slow_p)
		{
			printf("Loop detected");
			return (fast_p);
		}
	}
	return NULL;
}

struct Node* find_entry_point(struct Node** head)
{
	struct Node* meeting_point = detect_loop(head);
	struct Node* pNode = meeting_point;
	int count;
	while(pNode->Next != meeting_point)
	{
		pNode = pNode->Next;
		count++;
	}
	printf("\nThe number of nodes in the loop are %d",count);
	struct Node* pNode2 = *head;
	pNode = meeting_point;
	int i;
	for(i = 0; i<count; i++)
	{
		if(pNode == pNode2)
		{
			return (pNode2);
		}
		pNode2 = pNode2->Next;
		pNode = pNode->Next;
	}
	return NULL;
}


int main(void) {

	struct Node* node6 = (struct Node*)malloc(sizeof(struct Node));
	node6->Data = 6;
	node6->Next = NULL;
	struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));
	node5->Data = 5;
	node5->Next = node6;
	struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
	node4->Data = 4;
	node4->Next = node5;
	struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
	node3->Data = 3;
	node3->Next = node4;
	struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
	node2->Data = 2;
	node2->Next = node3;
	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
	node1->Data = 1;
	node1->Next = node2;
	node6->Next = node2;
	struct Node* head = node1;
	//detect_loop(&head);
	struct Node* entry_point;
	entry_point = find_entry_point(&head);
	printf("\nThe entry point is %d",entry_point->Data);
	return (0);

}
