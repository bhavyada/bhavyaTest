/*
 ============================================================================
 Name        : Integer_to_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MASK1 0xF
#define NUM_DIGITS (sizeof(unsigned int) * 2)

char* convert(unsigned int integer)
{
	int i,nibbleVal;
//	char a[NUM_DIGITS + 1];
	char *a = malloc(sizeof (char) * (NUM_DIGITS + 1));
	for (i= (NUM_DIGITS - 1); i >= 0; i--)
	{
		nibbleVal = (integer & ((MASK1 << (4*i)))) >> 4*i;

		char nibbleChar;
		if ((nibbleVal >= 0) && (nibbleVal <= 9))
		{
			nibbleChar = '0' + nibbleVal;
		}
		if ((nibbleVal >= 0XA) && (nibbleVal <= 0xF))
		{
			nibbleChar = 'A' + nibbleVal - 0xA;
		}

		a[NUM_DIGITS-i-1] = nibbleChar;

	}
	a[NUM_DIGITS] = '\0';
	return a;
}

int main(void) {
	int num = 0xABCD;
	printf("The number is %x\n",num);

	printf("the characters in the number are %s",convert(num));
	return 0;
}
