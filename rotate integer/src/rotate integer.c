/*
 ============================================================================
 Name        : rotate.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int rotateleft(unsigned long x, int shift)
{
	return (x << shift) | (x >> (32- shift)) ;
}

int rotate_left (unsigned long x, int shift)
{
	int temp;
	temp = x >> (32 - shift);
	return (x<< shift | temp);
}

int rotate_left_reverse(unsigned int x, int shift)
{
	int f_half, s_half;
	f_half = x >> (32 - shift);
	s_half = x << shift;
	return s_half | f_half;

}
int main(void)
{
	printf ("%X\n", rotateleft(0xABCDEF01,16));
	printf ("%x\n", rotate_left (0xABCDEF01, 12));
	printf ("%x\n", rotate_left_reverse(0xABCDEF01, 16));
	return 0;
}
