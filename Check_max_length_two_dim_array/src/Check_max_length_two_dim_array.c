/*
 ============================================================================
 Name        : Check_max_length_two_dim_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLUMNS 4

int check_max_route(int* array1[][COLUMNS], int ROWS1)
{
	int i,j;int sum =0;
	for(i=0; i< ROWS-1; i++)
	{
		for(j=0; j<COLUMNS-1; j++)
		{
			if (*(array1[i][j+1]) > (*(array1[i+1][j])))
			{
				(array1[i][j]) = (array1[i][j+1]);
			}
			else
			{
				(array1[i][j]) = (array1[i+1][j]);
			}
			printf(" %d", *(array1[i][j]));
			sum = sum + *array1[i][j];
		}
	}
	return (sum);
}

int main(void) {

	int array[ROWS][COLUMNS] = {2,4,8,2},{5,6,7,8},{4,5,2,1},{8,2,3,5};
	int* array1 = array;
	check_max_route(array1, 4);
}
