/*
 ============================================================================
 Name        : First_20_even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_even_numbers()
{
	int count = 0 ;int i;
	while (count != 20)
	{
			if(i%2 == 0)
			{
				printf(" %d", i);
				count++;
			}
		i++;
	}
}

int main(void) {

	print_even_numbers();
	return 0;
}
