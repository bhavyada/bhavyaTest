//============================================================================
// Name        : set_preset_toggle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x = 10;
	// set the third bit
	x = x | 1>>3;

	// clear the third bit
	x = x & ~(1>>3);

	// toggle the third bit
	x = x ^ (1>>3);
}
