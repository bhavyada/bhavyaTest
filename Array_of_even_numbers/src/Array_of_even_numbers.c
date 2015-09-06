/*
 ============================================================================
 Name        : Array_of_even_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int positive(int *arr, int n)
{
	int i;
	int sum =0;
	for(i=0; i < n; i++)
	{
		if (!((arr[i]) & 1))
		{
			sum = sum + arr[i];
		}
	}
	return (sum);
}

int main(void)
{
	int array[10] = {2,3,4,5,6,7,8,9,12,4};
	printf("The sum of even numbers is %d",positive(array, 10));
	return (0);
}

//1 1 9
//9 9 0
//0 9
//



