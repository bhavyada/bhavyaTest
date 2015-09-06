/*
 ============================================================================
 Name        : bucket_trial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_BUC 5
#define BUC_SIZE 20

struct bucket{
	int data;
	struct bucket *next;
};

struct bucket* a= (struct bucket*)0x0;
struct bucket* b= (struct bucket*)0x0;
struct bucket* c= (struct bucket*)0x0;
struct bucket* d= (struct bucket*)0x0;
struct bucket* e= (struct bucket*)0x0;


void Insert(struct bucket** head, int value)
{
	struct bucket* current = *head;
	struct bucket* prev = NULL;

	struct bucket* newbucket = (struct bucket*)malloc(sizeof(struct bucket));
	newbucket->data = value;
	newbucket->next = NULL;

	if ((*head == NULL)||(newbucket->data < (*head)->data))
	{
		*head = newbucket;
		newbucket->next = current;
	}
	else
	{
		while ((current != NULL) && (current->data < newbucket->data))
		{
			prev = current;
			current = current->next;
		}
		prev->next = newbucket;
		newbucket->next = current;
	}

}

void bucket_sort( int array[], int n, int out_arr[])
{
	struct bucket* bucket_array[] = {a,b,c,d,e};
	int i,j;

	for (i = 0; i < n; i++)
	{
		int index= array[i] < 100 ? (array[i]/BUC_SIZE) : 4;
		Insert(&(bucket_array[index]), array[i]);
	}

	printf("\n");
	struct bucket* current = NULL;

	int k =0;
	for (j=0; j< NUM_BUC; j++)
	{
		for (current = bucket_array[j]; current != NULL; current = current->next)
		{
			out_arr[k++] = current->data;
		}
	}

}



int main(void) {
	int array[] = { 15,73,82,31,42,66,25,2,88,53};
	int n = sizeof(array)/sizeof(array[0]);
	int out_arr[10];
	int i;
	printf("The unsorted list of size %d is\n", n);
	for(i = 0; i < n; i++)
	{
		printf(" %d\t",array[i]);
	}
	bucket_sort(array,n,out_arr);
	printf("\nThe sorted list is\n");
	for(i = 0; i < n; i++)
	{
		printf(" %d\t",out_arr[i]);
	}

	return 0;
}
