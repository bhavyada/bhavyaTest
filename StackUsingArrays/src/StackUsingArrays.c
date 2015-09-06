/*
 ============================================================================
 Name        : StackUsingArrays.c
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
int top = -1;


void push(int value)
{
	if( top == MAX_SIZE - 1)
	{
		printf("Error: you have exceeded the stack limit");
		return;
	}
	top = top + 1;
	A[top] = value;
}

void pop()
{
	if (top == -1)
	{
		printf("Error: You are trying to delete from a empty stack");
		return;
	}
	top--;
}

void print()
{
	int i;
	printf("The Stack is:");
	for (i=0; i<= top; i++)
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
