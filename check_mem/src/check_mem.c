/*
 ============================================================================
 Name        : check_mem.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int *N1 = (int*)calloc(1,4);
	*N1 = 10;

	printf("0x%x,%d", N1,*N1);
	free(N1);
	printf("0x%x.%d", N1, *N1);
}
