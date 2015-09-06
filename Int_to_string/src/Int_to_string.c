/*
 ============================================================================
 Name        : Int_to_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void int_to_string(int num, char* arr)
{
	int len =0;int i;int rem =0;
	int n;
	n = num;
	while(n!= 0)
	{
		len++;
		n =n/10;
	}
	for (i=0; i<len; i++)
	{
		rem = num % 10;
		num = num/10;
		arr[len - (i+1)] = rem + '0';
	}

}
int main(void)
{
	int n = 23768;
	char arr[20];

	int_to_string(n,arr);
	printf(("%s"),arr);
	return 0;

}
