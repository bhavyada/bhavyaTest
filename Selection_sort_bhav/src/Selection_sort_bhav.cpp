//============================================================================
// Name        : Selection_sort_bhav.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void selection_sort(int array[], int n)
{
	int min ;int i;int j ;int temp;
	int index;
		for (j= 0;j<n-1 ;j++)
		{
			min= array[j];
			for(i=j; i<n; i++)
			{

				if(array[i] <= min)
				{
					min = array[i];
					index = i;

				}
			}
			temp = array[index];
			array[index] = array[j];
			array[j] = temp;
		}
}
int main()
{
	int array[10] = {25,9,1,83,7,12,5,67,34,42};
	int n = sizeof(array)/sizeof(array[0]);
	int k;
	selection_sort(array,n);
	printf("The sorted array is");
	for(k=0; k<n; k++)
	{
	printf(" %d", array[k]);
	}
}


