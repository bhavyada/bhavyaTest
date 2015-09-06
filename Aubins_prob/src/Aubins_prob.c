/*
 ============================================================================
 Name        : Aubins_prob.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


// You have  a string of numbers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number_of_prob(char* input)
{
	int len = strlen(input);
	char A[6];
	A[0] = 1;
	int i;
	for(i = 1; i < len;i++)
	{
		if (input[i-1] > 0)
		{
			A[i] = A[i] + A[i-1];
		}
		if((i > 2) && ( 10* input[i-1] + input[i]))
		{
			A[i] = A[i] + A[i-2];
		}
	}
	return (A[len]);
}


int main(void) {
	char input[5] = "12121";
	int s = number_of_prob(input);
	printf("The number of possibilities are %d",s);
	return 0;
}
