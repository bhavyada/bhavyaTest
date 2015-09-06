//============================================================================
// Name        : Separate_oddeven_linkedlist.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
	unsigned int Value;
	Node *Next;
};

class LinkedList
{
public:
	LinkedList(void)
		{
			head = NULL;
		}
    void Insert(unsigned int x);
	void Insert_Order(unsigned int x);
	void PrintLinkedList(void);
	void Print_ordered(void);
	void Sort_LinkedList(bool odd);
	void Print_sorted(void);

private:
	Node *head;
};

void LinkedList::Insert(unsigned int x)
{
	struct Node* current = head;
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	head = newNode;
	newNode->Value = x;
	newNode->Next = current;
}

void LinkedList::Insert_Order(unsigned int x)
{
	struct Node* present = head;
	struct Node* prev = NULL;
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->Value = x;

	if (head == NULL)
	{
		head = newNode;
		newNode->Next = NULL;
	}
	else
	{
		while ((present!= NULL) && (present-> Value < newNode->Value))
		{
			prev = present;
			present = present->Next;
		}
		if (prev == NULL)
				{
					head = newNode;
					newNode->Next = present;

				}
				else
				{
					prev->Next = newNode;
					newNode->Next = present;
				}
	}
}

void LinkedList::Sort_LinkedList(bool odd)
{
	struct Node* current = head;
	printf("\n");
	while(current!=NULL)
	{

		if ((bool)((current->Value) & 1) == odd)
		{
			printf (" %d",current->Value);

		}
		current = current->Next;
	}
}



void LinkedList::PrintLinkedList()
{
	struct Node* current = head;
	printf("The Linked List sorted is");
	while(current!= NULL)
	{
		printf("\t");
		printf("%d", current-> Value);
		current = current->Next;
	}
	printf("\n");
}

void LinkedList::Print_ordered()
{
	struct Node* current = head;
	printf("The Sorted List original is");
	while(current!= NULL)
	{
		printf("\t");

		printf("%d", current-> Value);
		current = current->Next;
	}
	printf("\n");
}

int main()
{
	LinkedList ll1,ll2;
	ll1.Insert(8);
	ll1.Insert(3);
	ll1.Insert(9);
	ll1.Insert(4);
	ll1.Insert(2);
	ll2.Insert_Order(8);
	ll2.Insert_Order(3);
	ll2.Insert_Order(9);
	ll2.Insert_Order(4);
	ll2.Insert_Order(2);
	ll1.PrintLinkedList();
	ll2.Print_ordered();
	ll2.Sort_LinkedList(0);
	ll2.Sort_LinkedList(1);
}
