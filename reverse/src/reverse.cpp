//============================================================================
// Name        : reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Node
{
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
	void Insert(unsigned int x);
	void Reverse(void);
	void PrintLinkedList(void);
private:
	Node* head;
};

void LinkedList::Insert(unsigned int x)
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

void LinkedList::Reverse()
{
    struct Node* prev   = NULL;
    struct Node* current = head;
    struct Node* next;
    while (current != NULL)
    {
        next  = current->Next;
        current->Next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
int main() {

	LinkedList ll1;
	ll1.Insert(3);
	ll1.Insert(8);
	ll1.Insert(5);
	ll1.Insert(4);
	ll1.PrintLinkedList();
	ll1.Reverse();
	ll1.PrintLinkedList();
	return 0;
}
