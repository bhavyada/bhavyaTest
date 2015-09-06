/*
 ============================================================================
 Name        : three_stacks_one_array_trial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 30
#define NUM_OF_ARRAY 3

int array[ARR_SIZE];
int start = 0;
int end = ARR_SIZE - 1;
int middle = ARR_SIZE/2;


void push(int value, int stack_no)
{

	if (stack_no == 1)
	{
		if (start == ARR_SIZE/2 -1)
		{
			printf("Stack 1 limit exceeded");
		}
		array[start++] = value;
	}
	else if (stack_no == 2)
	{
		if (end == middle)
		{
			printf("Stack 2 limit exceeded");
		}
		array[end--] = value;
	}
	else if (stack_no == 3)
	{
		if (end == middle)
		{
			printf("Stack 3 limit exceeded");
		}
		array[middle++] = value;
	}
}

int pop(int stack_no)
{
	if (stack_no ==1)
	{
		if (start <= 0)
		{
			printf("Stack is empty. Cannot pop");
			return 0;
		}
		return array[start--];
	}
	else if (stack_no ==2)
	{
		if (end >= ARR_SIZE -1)
		{
			printf("Stack is empty. Cannot pop");
			return 0;

		}
		return array[end++];
	}
	else if(stack_no == 3)
	{
		if (middle <= ARR_SIZE /2)
		{
			printf("Stack is empty. Cannot pop");
			return 0;
		}
		return array[middle--];
	}
	return 0;
}

int main(void)
{
	push(0, 1);
		push(1, 1);
		push(2, 1);
		push(3, 1);
		push(4, 2);
		push(5, 2);
		push(6, 3);
		push(7, 3
				);
		push(8, 1);
		push(9, 1);
		push(10, 1);
		push(11, 1);
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		printf("%d\n", pop(1));
		return 0;
}
