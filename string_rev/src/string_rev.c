/*
 ============================================================================
 Name        : testing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	char src[100]= ("bhavya");
	char rev[100];
	char* sptr = src;
	char* rptr = rev;

	int i = 0;

	while( *sptr != '\0')
	{
		sptr++;
		i++;
	}

	printf("%d ",i);


	while(i>0)
	{
		sptr--;
		*rptr = *sptr;
		rptr++;
		--i;
	}

	*rptr = ('\0');

	//rptr -= (n);
	printf("%s", rev);
	return 0;
}
