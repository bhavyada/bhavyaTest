/*
 ============================================================================
 Name        : trial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array1[5] = {1,2,3,4,5};
	int *p = array1;
	printf(" the 1st the element is %d", array1[0]);
	printf(" \n the 1st the element is %d", *p);

	return 0;
}
