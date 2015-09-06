/*
 ============================================================================
 Name        : Num_div_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_div_7()
{
	int count = 0;int i;
	while (count <= 10)
	{
		if(i %7 == 0)
		{
			printf(" %d",i);
			count++;
		}
		i++;
	}
}

int main(void) {
	print_div_7();
	return 0;
}
