/*
 ============================================================================
 Name        : Number_of_in_a_integer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int Num_of_1(int num)
{
	int count = 0;
	int num1;
	while(num)
	{
		printf("%x\t", num);
		num1 = num - 1 ;
		num = num1 & num;
		count++;
	}
	return count;
}

int main(void)
{

	printf("The number of 1s in the integer are %d",Num_of_1(5));
	return 0;
}


