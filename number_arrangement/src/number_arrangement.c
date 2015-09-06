/*
 ============================================================================
 Name        : number_arrangement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define NUM 32
#define MASKBIT 1


int main(void)
{
	unsigned int a[NUM];
	int i;
	//InitiLIZE all the arrays
//	printf ("\nThe original numbers are");

		for (i=0; i< NUM; i++)
		{
			a[i] = 0xFFFF;
//			printf ("\n%x",a[i]);
		}

	// now do the manipulation


		printf ("\nThe manipulated numbers are");
	for (i= 0; i < NUM/2; i++)
	{
		a[i] = ((a[i] & (~(MASKBIT << i)) & (~(MASKBIT << (NUM-i-1)))) | ((a[i] & (MASKBIT << i)) << (NUM-(i*2)
				-1)) | ((a[i] & (MASKBIT << (NUM-i-1))) >> (NUM-i-1)));

		printf ("\n%x",a[i]);

	}
	return 0;
}
