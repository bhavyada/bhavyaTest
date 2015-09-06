//============================================================================
// Name        : Check_loop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int Value;
	struct Node* Next;
};

class LinkedList
{
public:
	LinkedList(void)
	{
		head = NULL;

	}
	Node* Insert(unsigned int x);
	void PrintLinkedList(void);
	int Detect_loop(void);

private:
	Node* head;
};

Node* LinkedList::Insert(unsigned int x)
{
	struct Node* current = head;
	struct Node* newNode = new(Node);
	newNode->Value = x;
	if (head==NULL)
	{
		head = newNode;
		newNode->Next = NULL;
	}
	if (current != NULL)
	{
		while(current->Next != NULL)
		{
		  current = current->Next;
		}
          current->Next = newNode;
          newNode->Next = NULL;

	}
	return newNode;
}

void LinkedList::PrintLinkedList()
{
	struct Node* current = head;
	printf("The Linked List is");
	while(current!= NULL)
	{
		printf("\t");
		printf("%d", current-> Value);
		current = current->Next;
	}
	printf("\n");
}

int LinkedList:: Detect_loop()
{
	struct Node* slow_p = head;
	struct Node* fast_p = head;
	while ((slow_p != NULL) && (fast_p != NULL) && (fast_p->Next != NULL))
		{
			slow_p = slow_p->Next;
			fast_p = fast_p->Next->Next;
			if (slow_p == fast_p)
			{
				printf("Loop detected");
				return 1;
			}
		}
	return 0;
}

int main()
{
	LinkedList ll1;
	//struct Node* a1;
	struct Node* a2;
	//struct Node* a3;
	//struct Node* a4;
	struct Node* a5;

	ll1.Insert(8);
	a2=ll1.Insert(3);
	ll1.Insert(9);
	ll1.Insert(4);
	a5=ll1.Insert(2);
//	ll1.PrintLinkedList();
	a5->Next = a2;

	ll1.Detect_loop();
	return 0;
}
