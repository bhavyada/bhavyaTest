/*
 ============================================================================
 Name        : Find_divisors_of_num.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void find_divisors(int num)
{
	int i = 2;
	while (i <= sqrt(num))
	{
		if(num %i == 0)
		{
			printf(" %d", i);
		    if(i != num/i)
		    {
			printf(" %d", num/i);
		    }
		}
		i++;
	}
}

int main(void) {
	int num1 = 36;
	find_divisors(num1);
	return 0;
}
