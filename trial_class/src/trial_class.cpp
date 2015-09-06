//============================================================================
// Name        : trial_class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a=4; int b=5; int c=6;
	int max = a>b? a:b;
	int maximum = max > c? max:c;
	printf(" %d",maximum);

	int min = a<b? a:b;
	int minimum = min < c? min:c;
	printf(" %d",minimum);

}
