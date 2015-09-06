//============================================================================
// Name        : FindHalfWordInLinkedList.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Given a Linked List, find the first element whose first or second half matches the search term
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#define MASK1 0XFFFF
#define MASK2 0xFFFF0000

struct Node
{
	unsigned int Value;
	Node *Next;
};

class LinkedList
{
public:
	LinkedList(void) {head = NULL;}
	int FindHalfWord(unsigned int x);
	void Insert(unsigned int x);
	void PrintLinkedList(void);

private:
	Node *head;

};

int LinkedList::FindHalfWord(unsigned int x)
{
     struct Node* current = head;
     unsigned int f_half, s_half;
     int count = 0;
     while(current != NULL)
     {
    	 f_half = current->Value & MASK1;
         s_half = (current->Value & MASK2) >> 16;
         if ((s_half == x) || (f_half == x))
         {
        	 return count;
         }
         current = current -> Next;
         ++count;
     }
     return -1;
}


void LinkedList::Insert(unsigned int x)
{
	struct Node* current = head;
	struct Node* prev = NULL;

	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode-> Value = x;

	if (head == NULL)
	{
		head = newnode;
		newnode-> Next = NULL;
	}
	else
	{
		while ((current != NULL) && (current-> Value < newnode-> Value))
		{
			prev = current;
			current = current->Next;
		}
		if (prev == NULL)
		{
			head = newnode;
			newnode->Next = current;

		}
		else
		{
			prev->Next = newnode;
			newnode->Next = current;
		}
	}

}

void LinkedList::PrintLinkedList(void)
{

	printf(" Linked List");
	Node *current = head;
	while(current != NULL)
	{
		printf("\t");
		printf("%x",current-> Value);
		current = current-> Next;
	}
	printf("\n");
}


int main()
{
	LinkedList ll;
	ll.Insert(0x356AF);
	ll.Insert(0x375526BF);
	ll.Insert(0x12345678);
	ll.Insert(0x4321F01);
	ll.Insert(0x1A2B3C4D);
	ll.Insert(0x00000010);
	ll.Insert(0x67391DE2);
	ll.Insert(0x87654321);

	ll.PrintLinkedList();
	unsigned int halfword = 0x4321;

	printf("found halfword: %x at node: %d", halfword, ll.FindHalfWord(halfword));
	return 0;
}
