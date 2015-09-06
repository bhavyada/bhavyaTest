/*
 ============================================================================
 Name        : hamming_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#define NUM 7

int main(void)
{
	int x =7;
	int count = 0;
	while(x)
	{
		x = x & (x -1);
		count++;
	}
	printf("%d",count);
	return 0;


}
