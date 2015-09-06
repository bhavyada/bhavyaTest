//============================================================================
// Name        : ThreeStackOnArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Three stacks in one array
//============================================================================

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 30
#define NUM_STACKS 3

int array[ARR_SIZE];
int index[NUM_STACKS];

void init(void)
{
	for (int i = 0; i < NUM_STACKS; ++i)
	{
		index[i] = 0;
	}
}

void push(int value, int stack_no)
{
	if (index[stack_no] >= (ARR_SIZE/NUM_STACKS))
	{
		printf("STACK IS FULL\n");
	}
	else
	{
		array[(ARR_SIZE / NUM_STACKS * stack_no) + index[stack_no]] = value;
		(index[stack_no])++;
	}
}

int pop(int stack_no)
{
	int tmp = ~0x0;
	if (index[stack_no] <= 0)
	{
		printf("stack is empty\n");
	}
	else
	{
		--(index[stack_no]);
		tmp = (array[(ARR_SIZE / NUM_STACKS * stack_no) + index[stack_no]]);
	}
	return tmp;
}




int main()
{
	init();
	push(0, 1);

	push(1, 1);
	push(2, 1);
	push(3, 1);
	push(4, 2);
	push(5, 2);
	push(6, 1);
	push(7, 1);
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
