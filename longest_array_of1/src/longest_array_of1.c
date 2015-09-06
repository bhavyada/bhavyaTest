/*
 ============================================================================
 Name        : longest_array_of1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int longest_number_of1(char *a)
{
	int i = 0;int temp = 0;
	int count = 0;
	while(a[i] != '\0')
	{

		while(a[i] == '1')
		{
			count++;
			temp = temp>count?temp:count;
            i++;
		}

		if(a[i]=='0')
		{
			count =0;
		}
		i++;
	}
	return temp;
}

int first_bit_position(char *a,int temp)
{
	int i = 0;int count =0;int t=0;
	while(a[i]!= '\0')
	{
		if(a[i]=='1')
		{
			count++;

		}
		else if(a[i]=='0')
		{
			count=0;
		}
		if (count >= temp)
		{
			t= i-temp;
		}
		i++;
	}
	return t+1;
}

int main(void)
{
	int g;
	char label[] = "0000000011000000000011011111111100000";
	g = longest_number_of1(label);
	printf("The longest array contains %d 1s",g );
	printf("\nThe first bit position is %dth index", first_bit_position(label,g));
	return EXIT_SUCCESS;
}
