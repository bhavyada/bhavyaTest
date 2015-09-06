/*
 ============================================================================
 Name        : reverse_bits_of_byte.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ONE_BIT 0X01

int reverse_bits_of_byte(int num)
{
	int i;
	int rev_num = 0;
	for (i = 8; i > 0; --i)
	{
		rev_num = (rev_num << 1) + (num & ONE_BIT);
		num = num >> 1;
	}
	return rev_num;
}

int reverse_bits_of_byte_halfloop(int num)
{
	int num_bits_shift = 7;
	int r = 0x1;
	int l = r << num_bits_shift;

	while (l > r)
	{
		num = (num & (~r) & (~l)) | ((num & r) << num_bits_shift) | ((num & l) >> num_bits_shift);
		r <<= 1;
		l >>= 1;
		num_bits_shift -= 2;
	}
	return num;
}

int main(void)
{
	int num = 0x7;
	printf("The reversed bits of byte is 0X%x",reverse_bits_of_byte(num));
	printf("\nreverse_bits_of_byte_halfloop(0X%x) = 0X%x", num, reverse_bits_of_byte_halfloop(num));
	return EXIT_SUCCESS;
}

//00001001 -> 10010000

//00000001   10000000

//01100111

