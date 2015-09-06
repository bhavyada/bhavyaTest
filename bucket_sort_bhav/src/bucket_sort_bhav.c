/*
 ============================================================================
 Name        : buuble_sort_bhav.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define no_buckets 5

struct bucket* a = NULL;
struct bucket* b = NULL;
struct bucket* c = NULL;
struct bucket* d = NULL;
struct bucket* e = NULL;
//far struct bucket *bucket_array[5] = {a, b, c, d, e};
struct bucket* current[5];
struct bucket* prev[5];

struct bucket{
	int data;
	struct bucket* values;
};

void Insert(int **bucket_array[], int val)
{


	struct bucket* current[5];
	struct bucket* prev[5];
	int i;
	struct bucket* new_value = (struct bucket*)malloc(sizeof(struct bucket));
	new_value-> data = val;
	for(i=0; i<5; i++)
	{
		current[i] = bucket_array[i];
	}

	if ((bucket_array[buc_num] == NULL) || (new_value-> data < bucket_array[buc_num]->data))
	{
		bucket_array[buc_num] = new_value;
	}
	else
	{
		while((current[buc_num]->values != NULL) && (new_value->data < current[buc_num]->data))
		{
			prev[buc_num] = current[buc_num];
			current[buc_num] = current[buc_num]->values;
		}
		prev[buc_num]->values = new_value;
		new_value->values = current[buc_num];
	}
}





void bucket_sort(int *array, int n)
{
	struct bucket* current ;
	struct bucket* out_arr[10];
	int i;

	for (i=0; i<n; i++)
	{
		if (array[i]<20)
		{
			Insert(&a,array[i]);
		}
		else if (array[i] >21  && array[i] <= 40)
		{
			Insert(&b, array[i]);
		}
		else if (array[i] >41  && array[i] <= 60)
		{
			Insert(&c, array[i]);
		}
		else if (array[i] >61 && array[i] <= 80)
		{
			Insert(&d, array[i]);
		}
		else if (array[i] >81 && array[i] <=100)
		{
			Insert(&e, array[i]);
		}
	}
	for (i = 0; i<n; i++)
	{
		for( current = bucket_array[i]; current != NULL; current = current ->values)
		{
			out_arr[i++] = current->data;
		}
	}
}

int main()
{
	int array[] = { 15,73,82,31,42,66,25,2,88,53};
	int n = sizeof(array)/sizeof(array[0]);
	int i;
	printf("The unsorted list of size %d is\n", n);
	for(i = 0; i < n; i++)
	{
	    printf(" %d\t",array[i]);
	}
	bucket_sort(array,n);
	printf("\nThe sorted list is\n");
	for(i = 0; i < n; i++)
	{
		printf(" %d\t",array[i]);
	}

	return 0;
}
