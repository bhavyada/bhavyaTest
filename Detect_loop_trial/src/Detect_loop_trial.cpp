//============================================================================
// Name        : Detect_loop_trial.cpp
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
	struct Node* Next;
};

void detect_loop(struct Node* head)
{
	struct Node* first = head;
	struct Node* second = head;
	while(second != NULL)
	{
		first = first->Next;
		second = second ->Next ->Next;
		if (first == second)
		{
			printf("Loop is detected");
		}
	}


}
int main() {

	return 0;
}
