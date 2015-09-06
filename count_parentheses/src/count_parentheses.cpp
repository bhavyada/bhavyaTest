//============================================================================
// Name        : count_parentheses.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

bool checkstring(string S)
{
	int length = S.size();
	int count = 0;
	for (int i=0; i< length; i++)
	{
		if (S[i]== '(')
		{
			count++;
		}
		if (S[i] == ')')
		{
			if (count == 0) return false;
			count--;
		}
	}
	if (count == 0)
		return true;
	else
		return false;
}
int main()
{
	printf("the Parenthesis is properly balanced: %s",checkstring("()(())())(")?"true":"false");
	return 0;
}
