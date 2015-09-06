//============================================================================
// Name        : Test1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//

// Implement 3 queues using 1 array.
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

#define NUM_QUEUES 3

struct S_Queue
{
	int *A;
	int Front;
	int End;
};

class Queue
{
	public:
		Queue (int size);
		void Push(int qNum, int val);
		int Pop(int qNum);
	private:
		S_Queue QueueArr[NUM_QUEUES];
		const int QSIZE;
		int count;
};

Queue::Queue(int size)
	: QSIZE(size)
{
	for (int i = 0; i < NUM_QUEUES; i++)
	{
		QueueArr[i].A = (int *)malloc(sizeof(int) * QSIZE / NUM_QUEUES);
		QueueArr[i].Front = 0;
		QueueArr[i].End = 0;
		count = 0;
	}
}

void Queue::Push(int q, int x)
{
	if (count == 0)
			{
				QueueArr[q].End = 0;
			}
	if (count == QSIZE)
	{
		printf ("The array is full \n");
	}
	else
	{
		*(QueueArr[q].A) = x;
		QueueArr[q].End++;
		count++;
	}
}

int Queue::Pop(int q)
{

	if (count == 0)
	{
		printf("Array is empty \n");
		return (~0);
	}
	else
	{
		return QueueArr[q].Front++;
		count--;
	}


}

int main()
{
	Queue *myQ = new Queue(10);
	myQ->Push(1,1);
	myQ->Push(2,2);
	myQ->Push(0,3);
	myQ->Push(2,4);
	myQ->Push(0,5);
	myQ->Push(1,6);
	myQ->Push(2,7);
	myQ->Push(1,8);
	myQ->Push(1,9);
	myQ->Push(1,10);
	myQ->Push(1,11);
	myQ->Push(1,12);

	int value = 0;
	while (value != (~0))
	{
		for (int qnum = 0; qnum < 3; qnum++)
		{
			value = myQ->Pop(qnum);
			printf("%d\t in queue %d\n", value, qnum);
		}
	}

	return 0;
}

