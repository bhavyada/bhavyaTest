//============================================================================
// Name        : Queue_depth_first.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

#define QUE_SIZE 50

class Node
{
public:
	struct Node* L;
	struct Node* R;
	int V;
	Node(int val, Node* left, Node* right) : V(val), L(left), R(right){}
};



