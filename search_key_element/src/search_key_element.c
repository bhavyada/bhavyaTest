/*
 ============================================================================
 Name        : search_key_element.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int find_key(int a[6][5],int key)
{
	int i,j;
	int row = -1;
	for( i=0; i< 6; i++)
	{
		for( j=0; j<5; j++)
		{
			if ( a[i][j] == key)
			{
				row = i;
				return row;
			}
		}

	}
	return -1;
}

int main(void) {
	int key = 7;
	int a[6][5] = {
			{2,54,22,4,8},
			{5,23,51,92,1},
			{3,21,7,9,26},
			{34,53,6,61,90},
			{82,44,82,39,71},
			{36,47,28,94,84}
	};

	int result;
	result = find_key(a,key);
	printf("%s\n",result > 0? "TRUE": "FALSE");
	printf("Location of row is with index %d",result);
	return 0;
}
