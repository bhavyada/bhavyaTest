/*
 ============================================================================
 Name        : Binary_search_bhav.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *a, int key,int n)
{
	int start =0; int end = n-1;
	while (start <= end)
	{
		int middle = (start + end)/2;
		if(key < a[middle])
		{
			end = middle -1;
		}
		else if(key > a[middle])
		{
			start = middle +1;
		}
		else
		{
			return middle;
		}
	}
	return -1;
}

int main(void) {
	int array[] = {78,79,82,91,103,202,228,489,764};
	int key = 91;
	int n = sizeof(array)/sizeof(array[0]);
	printf ("Found the number at index %d",binary_search(array,key,n));

}
