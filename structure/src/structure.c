/*
 ============================================================================
 Name        : structure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


char a[] = "bhavya";
char b[] = "dayanand";

struct Name
{
	char * FirstName;
	char * SecondName;
};

int main(void)
{
	struct Name *namestr = (struct Name*)malloc(sizeof(struct Name));
	namestr->FirstName = a;
	namestr->SecondName = b;

	printf("The firstname is %s",namestr->FirstName);
	printf("The secondname is %s",namestr->SecondName);
	return 0;
}
