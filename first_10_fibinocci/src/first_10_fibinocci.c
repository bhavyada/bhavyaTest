/*
 ============================================================================
 Name        : first_10_fibinocci.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void fibinocci()
{
	int count =0;
	int fib0 = 0;
	int fib1 = 1;
	int fib;
	while (count <= 20)
	{
		fib = fib0 +fib1;
		fib0 = fib1;
		fib1 = fib;
		count++;
		printf(" %d", fib);
	}
}

int main(void) {
	fibinocci();
	return 0;
}
