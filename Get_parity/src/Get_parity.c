/*
 ============================================================================

 Name        : Get_parity.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

# include <stdio.h>
#define NUM_OF_BITS 32

/* Function to get parity of number n. It returns 1
   if n has odd parity, and returns 0 if n has even
   parity */

int getParity(int x)
{
	int parity = 0;
	while(x)
	{
		parity = !parity;
		x = x & (x-1);
	}
	return parity;
}

//0x12345678
//f_half 0x1234
//s_half 0x5678
//10000001

//num = 1000 ^ 0001= 1001;


int GetParity_log(unsigned int num)
{
	unsigned int f_half;
	unsigned int s_half;
	unsigned int half_bits = NUM_OF_BITS/2;
    unsigned int mask = 0xFFFFFFFF;

    while (num > 1)
	{
		mask = mask >> half_bits;
		f_half = num >> half_bits;
		s_half = num & mask;
		num = f_half ^ s_half;
		half_bits = half_bits >> 1;
	}
	return num;
}

int main()
{
    unsigned int x = 5;
    printf("\nParity of no %d = %s",  x,
             (getParity(x)? "odd": "even"));
    printf("\nParity of no %d = %s",  x,
             (GetParity_log(x)? "odd": "even"));

    return 0;
}
