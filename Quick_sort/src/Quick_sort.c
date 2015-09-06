/*
 ============================================================================
 Name        : Quick_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *a, int n)
{
	if (n < 2) return;

	int i = 0;
	int j = n - 1;
	int p,t;
	p= a[n/2];


	while (i < j)
	{
		while ((a[i] < p))
		{
			i++;
		}
		while ((p < a[j]))
		{
			j--;
		}

		t= a[i];
		a[i] = a[j];
		a[j] = t;
	}

	quick_sort(a,i);
	quick_sort(a+i, n-i);
}

int main(void) {
	int a[] = {45, 89, 12, 1, 90, 34, 8, 92};
	int n = sizeof(a) / sizeof(a[0]);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	printf ("\n");
	quick_sort(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;

}
