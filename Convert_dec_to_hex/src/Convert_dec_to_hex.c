/*
 ============================================================================
 Name        : Convert_dec_to_hex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void dec_to_hex(int num)
{
	char hex_num[50];
	//char hex;
	int i = 0;int j;int rem;
	int quo = num;
	while (quo != 0)
	{

		rem = quo % 16;
		if (rem < 10)
		{
			rem = rem + 48;
		}
		else
		{
			rem = rem + 55;
		}
		hex_num[i++] = rem;
		quo = quo/16;
	}
	printf("The hex of %d is ", num);
	for ( j = i ; j>= 0 ; j--)
	{
		printf("%c",hex_num[j]);
	}
}

int main(void) {
	int num = 678;
	dec_to_hex(num);
	return 0;
}
