/*
 ============================================================================
 Name        : check_sum_in_tree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct BinaryTreeNode
{
    int                    value;
    struct BinaryTreeNode*  pLeft;
    struct BinaryTreeNode*  pRight;
};



void preorder_tree(struct BinaryTreeNode* pRoot, int expectedSum)
{
	if(pRoot == NULL)
		return;
	int isLeaf = 0;
	int currentsum = 0;
	while(pRoot)
	{
		currentsum = currentsum + pRoot->value;
		if (pRoot-> pLeft)
		{
			if(pRoot->pRight)
			{
				push_stack(pRoot->pRight);
			}
			pRoot = pRoot->pLeft;
		}
		else if (pRoot->pRight)
		{
			pRoot = pRoot->pRight;
		}
		else
			pRoot = StackPop();
	}


	if ((pRoot-> pLeft == NULL) && (pRoot-> pRight == NULL))
	{
	    isLeaf = 1;
	}

	if (currentsum == expectedSum && isLeaf == 1)
	{
		printf("Path found");
	}

}


int main(void)
{
	struct BinaryTreeNode*   pRoot;
		int expectedSum = 22;
	preorder_tree(pRoot, 22);
}
