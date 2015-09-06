/*
 ============================================================================
 Name        : Check_k_node_from_last.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<assert.h>

struct node
{
	int data;
	struct node* next;
};

int check_k_node_from_last(struct node* head, int k)
{
	int i;
	struct node* a = head;
	struct node* b = head;
	assert(k >= 0);
	for (i = 0; i < k ; i++)
	{
		if (b == NULL)
		{
			printf("Error: check your range");
			return 0;
		}
		b = b->next;
	}
	if (b == NULL)
	{
		printf("Error: check your range");
		return 0;
	}
	while ((b->next) != NULL)
	{
		a = a->next;
		b = b->next;
	}
	return a->data;
}

int main(void)
{
	struct node n9;
	n9.next = NULL;
	n9.data = 9;
	struct node n8;
	n8.next = &n9;
	n8.data = 8;
	struct node n7;
	n7.next = &n8;
	n7.data = 7;
	struct node n6;
	n6.next = &n7;
	n6.data = 6;
	struct node n5;
	n5.next = &n6;
	n5.data = 5;
	struct node n4;
	n4.next = &n5;
	n4.data = 4;
	struct node n3;
	n3.next = &n4;
	n3.data = 3;
	struct node n2;
	n2.next = &n3;
	n2.data = 2;
	struct node n1;
	n1.next = &n2;
	n1.data = 1;
	printf("\n The data in the 20th node from last is %d",check_k_node_from_last(&n8, 1));
	return EXIT_SUCCESS;
}

//1->2->3->4->5->6->7->8->9
