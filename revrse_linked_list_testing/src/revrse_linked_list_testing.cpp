//============================================================================
// Name        : revrse_linked_list_testing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node
{
	int Data;
	struct  Node* Next;
};

void print_linked_list(struct Node* head)
{
	struct Node* current = head;
	while (current != NULL)
	{
		printf(" %d", current->Data);
		current = current ->Next;
	}
}

struct Node* reverse_linked_list(Node* head)
{
	struct Node* current = head;
	struct Node* prev = NULL;
	struct Node* next;
	while (current != NULL)
	{
		next = current->Next;
		current->Next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

int main() {
	Node node1;
	node1.Next = NULL;
	node1.Data = 8;
	Node node2;
	node2.Next = &node1;
	node2.Data = 7;
	Node node3;
	node3.Next = &node2;
	node3.Data = 5;
	printf("The reverse linked list is");
	print_linked_list(reverse_linked_list(&node3));
	return 0;
}
