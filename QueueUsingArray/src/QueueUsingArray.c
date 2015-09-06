/*
 ============================================================================
 Name        : QueueUsingArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = 0;
int end = -1;


void push(int value)
{
	if( top == MAX_SIZE - 1)
	{
		printf("Error: you have exceeded the queue limit");
		end = -1;
	}
	end = end + 1;
	A[end] = value;
}

int pop()
{
	if (top == end)
	{
		printf("Error: You are trying to delete from a empty stack");
		top = 0;
	}
    top = top +1;
	return A[top-1];
}

void print()
{
	int i;
	printf("The Queue is:");
	for (i=top; i<= end; i++)
	{
		printf("%d,", A[i]);

	}
	printf("\n");
}

int main(void)
{
	push(3);
	print();
	push(5);
	print();
	push(8);
	print();
	pop();
	print();
	push(12);
	print();
	pop();
	print();
	push(8);
	print();
	return 0;
}


