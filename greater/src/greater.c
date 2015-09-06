/*
 ============================================================================
 Name        : greater.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void foo(void)

{

	unsigned int a = 8;

	int b = -20;

	(a+b > 6) ? puts("> 6") : puts("<= 6");

}

int main(void)
{
    foo();
    unsigned int a = 0XFFFF;
    char *ptr;

    if ((ptr = (char *)malloc(0)) == NULL) {

    puts("Got a null pointer");

    }

    else {

    puts("Got a valid pointer");

    }
    printf("%ud",a);
	return EXIT_SUCCESS;
}
