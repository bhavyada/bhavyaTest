/*
 ============================================================================
 Name        : try_count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int counter1(int count)
{
	return (++count % 60);
}

int counter2(int count)
{
	if (++count >= 60)
		count = 0;
	return count;
}

int main(void) {
	printf ("%d \n",counter1(61));
	printf ("%d",counter2(61));

	return EXIT_SUCCESS;
}
