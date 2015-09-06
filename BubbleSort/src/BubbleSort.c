/*
 ============================================================================
 Name        : BubbleSort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void bubblesort(int [], int);

int main(void)
{
	int n, c, array[10];
	printf("Enter the number of elements");
	fflush(stdout);
	scanf("%d",&n);

	printf("Enter %d integers",n);
	fflush(stdout);
	for(c=0;c<n;c++)
	{
	scanf("%d",&array[c]);
	}

	bubblesort(array,n);

	printf("The integers in the sorted order are");
	for(c=0;c<n;c++)
	{
		printf(" %d",array[c]);
	}
 return 0;
}

void bubblesort(int list[],int n)
{
	long c, d, t;

	  for (c = 0 ; c < ( n - 1 ); c++)
	  {
	    for (d = 0 ; d < n - 1; d++)
	    {
	      if (list[d] > list[d+1])
	      {


	        t         = list[d];
	        list[d]   = list[d+1];
	        list[d+1] = t;
	      }
	    }
	  }
}
