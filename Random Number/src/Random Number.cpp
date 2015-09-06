//============================================================================
// Name        : Random.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int random(int a, int b)
{
	int t = b - a + 1; int res;int i;
	do
	{
		res = 0;
		for( i = 0; (1<<i) < t; ++i)
		{
			res = (res << 1)| zero_one_random();
		}
	}
	while (res >= t)
	return res + a;
}

int main() {

}
